#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <Windows.h>

#define BUF_SIZE (4096)
typedef int __cdecl (*initModCallback)(uint8_t* addr, uint32_t size, uint8_t* addr_rdata, uint32_t size_rdata, uint8_t* addr_data, uint32_t size_data);

void LoadMods(uint8_t* addr, uint32_t size, uint8_t* addr_rdata, uint32_t size_rdata, uint8_t* addr_data, uint32_t size_data)
{
	wchar_t* buf = (wchar_t*)malloc(BUF_SIZE * sizeof(wchar_t));
	GetModuleFileNameW(NULL, buf, BUF_SIZE);
	*wcsrchr(buf, L'\\') = 0;

    wcscat(buf, L"\\mods\\*.dll");
	wchar_t* pFileName = wcsrchr(buf, L'\\') + 1;
	
	WIN32_FIND_DATAW ffd = {0};
	HANDLE hFind = FindFirstFileW(buf, &ffd);
	if (INVALID_HANDLE_VALUE == hFind) {
		free(buf);
		return;
	}

	do {
		if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) continue;
		wcscpy(pFileName, ffd.cFileName);

		HMODULE hMod = LoadLibraryW(buf);
		initModCallback fnInitMod = (initModCallback)GetProcAddress(hMod, "InitMod");
		if (fnInitMod) {
			fnInitMod(addr, size, addr_rdata, size_rdata, addr_data, size_data);
		}
	}
	while (FindNextFileW(hFind, &ffd) != 0);

	CloseHandle(hFind);
	free(buf);
}

void StartPatch()
{
	PIMAGE_DOS_HEADER pDosHdr = (PIMAGE_DOS_HEADER)GetModuleHandleW(NULL);

	if (pDosHdr->e_magic != IMAGE_DOS_SIGNATURE) {
		return;
	}
	
	PIMAGE_NT_HEADERS ntHdr = (PIMAGE_NT_HEADERS)( (char*)pDosHdr + pDosHdr->e_lfanew );
	
	if (ntHdr->Signature != IMAGE_NT_SIGNATURE) {
		return;
	}
	
	PIMAGE_SECTION_HEADER sectionHdr = (PIMAGE_SECTION_HEADER)( (PBYTE)&ntHdr->OptionalHeader + ntHdr->FileHeader.SizeOfOptionalHeader );

	uint32_t nSections = (uint32_t)(ntHdr->FileHeader.NumberOfSections);
	
	uint8_t* textAddr = NULL;
	uint32_t textSize = 0;

	uint8_t* rDataAddr = NULL;
	uint32_t rDataSize = 0;
	
	uint8_t* dataAddr = NULL;
	uint32_t dataSize = 0;

	for (uint32_t i = 0; i < nSections; i++) {
		if (strcmp(".text", (char*)&sectionHdr->Name) == 0) {
			textAddr = ((uint8_t*)pDosHdr) + (sectionHdr->VirtualAddress);
			textSize = sectionHdr->Misc.VirtualSize;
		} else if (strcmp(".rdata", (char*)&sectionHdr->Name) == 0) {
			rDataAddr = ((uint8_t*)pDosHdr) + (sectionHdr->VirtualAddress);
			rDataSize = sectionHdr->Misc.VirtualSize;
		} else if (strcmp(".data", (char*)&sectionHdr->Name) == 0) {
			dataAddr = ((uint8_t*)pDosHdr) + (sectionHdr->VirtualAddress);
			dataSize = sectionHdr->Misc.VirtualSize;
		}

		sectionHdr++;
	}

	if (!textAddr || !rDataAddr || !dataAddr) return;

	DWORD oldProtectText;
	DWORD oldProtectData;
	DWORD oldProtectRData;
    VirtualProtect(textAddr,  textSize,  PAGE_READWRITE, &oldProtectText);
    VirtualProtect(rDataAddr, rDataSize, PAGE_READWRITE, &oldProtectData);
    VirtualProtect(dataAddr,  dataSize,  PAGE_READWRITE, &oldProtectRData);
	
	LoadMods(textAddr, textSize, rDataAddr, rDataSize, dataAddr, dataSize);
	
    VirtualProtect(textAddr,  textSize,  oldProtectText,  &oldProtectText);
    VirtualProtect(rDataAddr, rDataSize, oldProtectData,  &oldProtectData);
    VirtualProtect(dataAddr,  dataSize,  oldProtectRData, &oldProtectRData);
}

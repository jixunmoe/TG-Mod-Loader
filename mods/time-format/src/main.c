#include "main.h"
#include <stdio.h>

// dd.MM.yy
uint8_t hexSearch_ddmmyy[34] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x64, 0x00, 0x64, 0x00, 0x2E, 0x00, 0x4D, 0x00, 0x4D, 0x00, 0x2E, 0x00, 0x79, 0x00, 0x79, 0x00,
    0x00, 0x00 
};

// d.MM.yy
uint8_t hexSource[32] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x64, 0x00, 0x2E, 0x00, 0x4D, 0x00, 0x4D, 0x00, 0x2E, 0x00, 0x79, 0x00, 0x79, 0x00, 0x00, 0x00 
};

// yyyy-MM-dd
uint8_t hexReplacedData[38] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x79, 0x00, 0x79, 0x00, 0x79, 0x00, 0x79, 0x00, 0x2D, 0x00, 0x4D, 0x00, 0x4D, 0x00, 0x2D, 0x00,
    0x64, 0x00, 0x64, 0x00, 0x00, 0x00 
};



#define BUF_SIZE (4096)
void InitMod(uint8_t* addr, uint32_t size, uint8_t* addr_rdata, uint32_t size_rdata, uint8_t* addr_data, uint32_t size_data) {
	uint8_t* end_addr = addr_rdata + size_rdata - sizeof(hexSource);

	uint8_t* qsl_format_dmmyy = NULL;

	for (uint8_t* ref_addr = addr; ref_addr < end_addr; ref_addr++) {
		if (memcmp(ref_addr, (char*)hexSource, sizeof(hexSource)) == 0) {
			qsl_format_dmmyy = ref_addr;
			break;
		}
	}

	uint8_t* qsl_format_ddmmyy = NULL;

	for (uint8_t* ref_addr = addr; ref_addr < end_addr; ref_addr++) {
		if (memcmp(ref_addr, (char*)hexSearch_ddmmyy, sizeof(hexSearch_ddmmyy)) == 0) {
			qsl_format_ddmmyy = ref_addr;
			break;
		}
	}

	if (!qsl_format_dmmyy || !qsl_format_ddmmyy) return;


	// char* buf = (char*)malloc(BUF_SIZE * sizeof(char));

	int counter = 0;
	end_addr = addr + size - 7;
	for (uint8_t* ref_addr = addr; ref_addr < end_addr; ref_addr++) {
		// 00899C3E | C745 EC 1881B902                | mov dword ptr ss:[ebp-14],telegram.2B98118                                       |
		if (*(uint16_t*)ref_addr == 0x45C7) {
			uint32_t const_addr = *(uint32_t*)(ref_addr + 3);
			if (const_addr == (uint32_t)qsl_format_dmmyy || const_addr == (uint32_t)qsl_format_ddmmyy) {
				*(uint32_t*)(ref_addr + 3) = (uint32_t)&hexReplacedData;
				
				// sprintf(buf, "patched at 0x%08x", (uint32_t)ref_addr);
				// MessageBoxA(NULL, buf, buf, 0);

				///////////////////////////////////////////////
				counter++;
				if (counter >= 6) {
					break;
				}
			}
		}
	}
}

BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}

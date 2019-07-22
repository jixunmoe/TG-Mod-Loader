#include "key.h"
#include "patcher.h"
#include "main.h"

#define PATH_BUF (4096)

HMODULE hModSysDll = NULL;
void* GetProc(const char* proc)
{
  return (void*)GetProcAddress(hModSysDll, proc);
}

BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved);

inline void StartAttach(HINSTANCE hinstDLL)
{
    char buf[1024];
    GetSystemDirectoryA(buf, 1024);
    strcat(buf, "\\winmm.dll");

    hModSysDll = LoadLibraryA(buf);

    MEMORY_BASIC_INFORMATION buffer;
    VirtualQuery(&DllMain, &buffer, sizeof(buffer));
    DWORD oldProtect;
    VirtualProtect(buffer.AllocationBase, 0x4000, PAGE_EXECUTE_READWRITE, &oldProtect);
    fixImport();
    VirtualProtect(buffer.AllocationBase, 0x4000, PAGE_EXECUTE_READ, &oldProtect);
}

BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            StartAttach(hinstDLL);
            StartPatch();
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

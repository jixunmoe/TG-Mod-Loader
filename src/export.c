#include "key.h"
#include "export.h"

#define PLACEHOLDER() __asm__(".byte 0xe9,00,00,00")


void DLL_EXPORT unkWinmm1 () { PLACEHOLDER(); }
void DLL_EXPORT mciExecute() { PLACEHOLDER(); }
void DLL_EXPORT CloseDriver() { PLACEHOLDER(); }
void DLL_EXPORT DefDriverProc() { PLACEHOLDER(); }
void DLL_EXPORT DriverCallback() { PLACEHOLDER(); }
void DLL_EXPORT DrvGetModuleHandle() { PLACEHOLDER(); }
void DLL_EXPORT GetDriverModuleHandle() { PLACEHOLDER(); }
void DLL_EXPORT NotifyCallbackData() { PLACEHOLDER(); }
void DLL_EXPORT OpenDriver() { PLACEHOLDER(); }
void DLL_EXPORT PlaySound() { PLACEHOLDER(); }
void DLL_EXPORT PlaySoundA() { PLACEHOLDER(); }
void DLL_EXPORT PlaySoundW() { PLACEHOLDER(); }
void DLL_EXPORT SendDriverMessage() { PLACEHOLDER(); }
void DLL_EXPORT WOW32DriverCallback() { PLACEHOLDER(); }
void DLL_EXPORT WOW32ResolveMultiMediaHandle() { PLACEHOLDER(); }
void DLL_EXPORT WOWAppExit() { PLACEHOLDER(); }
void DLL_EXPORT aux32Message() { PLACEHOLDER(); }
void DLL_EXPORT auxGetDevCapsA() { PLACEHOLDER(); }
void DLL_EXPORT auxGetDevCapsW() { PLACEHOLDER(); }
void DLL_EXPORT auxGetNumDevs() { PLACEHOLDER(); }
void DLL_EXPORT auxGetVolume() { PLACEHOLDER(); }
void DLL_EXPORT auxOutMessage() { PLACEHOLDER(); }
void DLL_EXPORT auxSetVolume() { PLACEHOLDER(); }
void DLL_EXPORT joy32Message() { PLACEHOLDER(); }
void DLL_EXPORT joyConfigChanged() { PLACEHOLDER(); }
void DLL_EXPORT joyGetDevCapsA() { PLACEHOLDER(); }
void DLL_EXPORT joyGetDevCapsW() { PLACEHOLDER(); }
void DLL_EXPORT joyGetNumDevs() { PLACEHOLDER(); }
void DLL_EXPORT joyGetPos() { PLACEHOLDER(); }
void DLL_EXPORT joyGetPosEx() { PLACEHOLDER(); }
void DLL_EXPORT joyGetThreshold() { PLACEHOLDER(); }
void DLL_EXPORT joyReleaseCapture() { PLACEHOLDER(); }
void DLL_EXPORT joySetCapture() { PLACEHOLDER(); }
void DLL_EXPORT joySetThreshold() { PLACEHOLDER(); }
void DLL_EXPORT mci32Message() { PLACEHOLDER(); }
void DLL_EXPORT mciDriverNotify() { PLACEHOLDER(); }
void DLL_EXPORT mciDriverYield() { PLACEHOLDER(); }
void DLL_EXPORT mciFreeCommandResource() { PLACEHOLDER(); }
void DLL_EXPORT mciGetCreatorTask() { PLACEHOLDER(); }
void DLL_EXPORT mciGetDeviceIDA() { PLACEHOLDER(); }
void DLL_EXPORT mciGetDeviceIDFromElementIDA() { PLACEHOLDER(); }
void DLL_EXPORT mciGetDeviceIDFromElementIDW() { PLACEHOLDER(); }
void DLL_EXPORT mciGetDeviceIDW() { PLACEHOLDER(); }
void DLL_EXPORT mciGetDriverData() { PLACEHOLDER(); }
void DLL_EXPORT mciGetErrorStringA() { PLACEHOLDER(); }
void DLL_EXPORT mciGetErrorStringW() { PLACEHOLDER(); }
void DLL_EXPORT mciGetYieldProc() { PLACEHOLDER(); }
void DLL_EXPORT mciLoadCommandResource() { PLACEHOLDER(); }
void DLL_EXPORT mciSendCommandA() { PLACEHOLDER(); }
void DLL_EXPORT mciSendCommandW() { PLACEHOLDER(); }
void DLL_EXPORT mciSendStringA() { PLACEHOLDER(); }
void DLL_EXPORT mciSendStringW() { PLACEHOLDER(); }
void DLL_EXPORT mciSetDriverData() { PLACEHOLDER(); }
void DLL_EXPORT mciSetYieldProc() { PLACEHOLDER(); }
void DLL_EXPORT mid32Message() { PLACEHOLDER(); }
void DLL_EXPORT midiConnect() { PLACEHOLDER(); }
void DLL_EXPORT midiDisconnect() { PLACEHOLDER(); }
void DLL_EXPORT midiInAddBuffer() { PLACEHOLDER(); }
void DLL_EXPORT midiInClose() { PLACEHOLDER(); }
void DLL_EXPORT midiInGetDevCapsA() { PLACEHOLDER(); }
void DLL_EXPORT midiInGetDevCapsW() { PLACEHOLDER(); }
void DLL_EXPORT midiInGetErrorTextA() { PLACEHOLDER(); }
void DLL_EXPORT midiInGetErrorTextW() { PLACEHOLDER(); }
void DLL_EXPORT midiInGetID() { PLACEHOLDER(); }
void DLL_EXPORT midiInGetNumDevs() { PLACEHOLDER(); }
void DLL_EXPORT midiInMessage() { PLACEHOLDER(); }
void DLL_EXPORT midiInOpen() { PLACEHOLDER(); }
void DLL_EXPORT midiInPrepareHeader() { PLACEHOLDER(); }
void DLL_EXPORT midiInReset() { PLACEHOLDER(); }
void DLL_EXPORT midiInStart() { PLACEHOLDER(); }
void DLL_EXPORT midiInStop() { PLACEHOLDER(); }
void DLL_EXPORT midiInUnprepareHeader() { PLACEHOLDER(); }
void DLL_EXPORT midiOutCacheDrumPatches() { PLACEHOLDER(); }
void DLL_EXPORT midiOutCachePatches() { PLACEHOLDER(); }
void DLL_EXPORT midiOutClose() { PLACEHOLDER(); }
void DLL_EXPORT midiOutGetDevCapsA() { PLACEHOLDER(); }
void DLL_EXPORT midiOutGetDevCapsW() { PLACEHOLDER(); }
void DLL_EXPORT midiOutGetErrorTextA() { PLACEHOLDER(); }
void DLL_EXPORT midiOutGetErrorTextW() { PLACEHOLDER(); }
void DLL_EXPORT midiOutGetID() { PLACEHOLDER(); }
void DLL_EXPORT midiOutGetNumDevs() { PLACEHOLDER(); }
void DLL_EXPORT midiOutGetVolume() { PLACEHOLDER(); }
void DLL_EXPORT midiOutLongMsg() { PLACEHOLDER(); }
void DLL_EXPORT midiOutMessage() { PLACEHOLDER(); }
void DLL_EXPORT midiOutOpen() { PLACEHOLDER(); }
void DLL_EXPORT midiOutPrepareHeader() { PLACEHOLDER(); }
void DLL_EXPORT midiOutReset() { PLACEHOLDER(); }
void DLL_EXPORT midiOutSetVolume() { PLACEHOLDER(); }
void DLL_EXPORT midiOutShortMsg() { PLACEHOLDER(); }
void DLL_EXPORT midiOutUnprepareHeader() { PLACEHOLDER(); }
void DLL_EXPORT midiStreamClose() { PLACEHOLDER(); }
void DLL_EXPORT midiStreamOpen() { PLACEHOLDER(); }
void DLL_EXPORT midiStreamOut() { PLACEHOLDER(); }
void DLL_EXPORT midiStreamPause() { PLACEHOLDER(); }
void DLL_EXPORT midiStreamPosition() { PLACEHOLDER(); }
void DLL_EXPORT midiStreamProperty() { PLACEHOLDER(); }
void DLL_EXPORT midiStreamRestart() { PLACEHOLDER(); }
void DLL_EXPORT midiStreamStop() { PLACEHOLDER(); }
void DLL_EXPORT mixerClose() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetControlDetailsA() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetControlDetailsW() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetDevCapsA() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetDevCapsW() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetID() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetLineControlsA() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetLineControlsW() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetLineInfoA() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetLineInfoW() { PLACEHOLDER(); }
void DLL_EXPORT mixerGetNumDevs() { PLACEHOLDER(); }
void DLL_EXPORT mixerMessage() { PLACEHOLDER(); }
void DLL_EXPORT mixerOpen() { PLACEHOLDER(); }
void DLL_EXPORT mixerSetControlDetails() { PLACEHOLDER(); }
void DLL_EXPORT mmDrvInstall() { PLACEHOLDER(); }
void DLL_EXPORT mmGetCurrentTask() { PLACEHOLDER(); }
void DLL_EXPORT mmTaskBlock() { PLACEHOLDER(); }
void DLL_EXPORT mmTaskCreate() { PLACEHOLDER(); }
void DLL_EXPORT mmTaskSignal() { PLACEHOLDER(); }
void DLL_EXPORT mmTaskYield() { PLACEHOLDER(); }
void DLL_EXPORT mmioAdvance() { PLACEHOLDER(); }
void DLL_EXPORT mmioAscend() { PLACEHOLDER(); }
void DLL_EXPORT mmioClose() { PLACEHOLDER(); }
void DLL_EXPORT mmioCreateChunk() { PLACEHOLDER(); }
void DLL_EXPORT mmioDescend() { PLACEHOLDER(); }
void DLL_EXPORT mmioFlush() { PLACEHOLDER(); }
void DLL_EXPORT mmioGetInfo() { PLACEHOLDER(); }
void DLL_EXPORT mmioInstallIOProcA() { PLACEHOLDER(); }
void DLL_EXPORT mmioInstallIOProcW() { PLACEHOLDER(); }
void DLL_EXPORT mmioOpenA() { PLACEHOLDER(); }
void DLL_EXPORT mmioOpenW() { PLACEHOLDER(); }
void DLL_EXPORT mmioRead() { PLACEHOLDER(); }
void DLL_EXPORT mmioRenameA() { PLACEHOLDER(); }
void DLL_EXPORT mmioRenameW() { PLACEHOLDER(); }
void DLL_EXPORT mmioSeek() { PLACEHOLDER(); }
void DLL_EXPORT mmioSendMessage() { PLACEHOLDER(); }
void DLL_EXPORT mmioSetBuffer() { PLACEHOLDER(); }
void DLL_EXPORT mmioSetInfo() { PLACEHOLDER(); }
void DLL_EXPORT mmioStringToFOURCCA() { PLACEHOLDER(); }
void DLL_EXPORT mmioStringToFOURCCW() { PLACEHOLDER(); }
void DLL_EXPORT mmioWrite() { PLACEHOLDER(); }
void DLL_EXPORT mmsystemGetVersion() { PLACEHOLDER(); }
void DLL_EXPORT mod32Message() { PLACEHOLDER(); }
void DLL_EXPORT mxd32Message() { PLACEHOLDER(); }
void DLL_EXPORT sndPlaySoundA() { PLACEHOLDER(); }
void DLL_EXPORT sndPlaySoundW() { PLACEHOLDER(); }
void DLL_EXPORT tid32Message() { PLACEHOLDER(); }
void DLL_EXPORT timeBeginPeriod() { PLACEHOLDER(); }
void DLL_EXPORT timeEndPeriod() { PLACEHOLDER(); }
void DLL_EXPORT timeGetDevCaps() { PLACEHOLDER(); }
void DLL_EXPORT timeGetSystemTime() { PLACEHOLDER(); }
void DLL_EXPORT timeGetTime() { PLACEHOLDER(); }
void DLL_EXPORT timeKillEvent() { PLACEHOLDER(); }
void DLL_EXPORT timeSetEvent() { PLACEHOLDER(); }
void DLL_EXPORT waveInAddBuffer() { PLACEHOLDER(); }
void DLL_EXPORT waveInClose() { PLACEHOLDER(); }
void DLL_EXPORT waveInGetDevCapsA() { PLACEHOLDER(); }
void DLL_EXPORT waveInGetDevCapsW() { PLACEHOLDER(); }
void DLL_EXPORT waveInGetErrorTextA() { PLACEHOLDER(); }
void DLL_EXPORT waveInGetErrorTextW() { PLACEHOLDER(); }
void DLL_EXPORT waveInGetID() { PLACEHOLDER(); }
void DLL_EXPORT waveInGetNumDevs() { PLACEHOLDER(); }
void DLL_EXPORT waveInGetPosition() { PLACEHOLDER(); }
void DLL_EXPORT waveInMessage() { PLACEHOLDER(); }
void DLL_EXPORT waveInOpen() { PLACEHOLDER(); }
void DLL_EXPORT waveInPrepareHeader() { PLACEHOLDER(); }
void DLL_EXPORT waveInReset() { PLACEHOLDER(); }
void DLL_EXPORT waveInStart() { PLACEHOLDER(); }
void DLL_EXPORT waveInStop() { PLACEHOLDER(); }
void DLL_EXPORT waveInUnprepareHeader() { PLACEHOLDER(); }
void DLL_EXPORT waveOutBreakLoop() { PLACEHOLDER(); }
void DLL_EXPORT waveOutClose() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetDevCapsA() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetDevCapsW() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetErrorTextA() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetErrorTextW() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetID() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetNumDevs() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetPitch() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetPlaybackRate() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetPosition() { PLACEHOLDER(); }
void DLL_EXPORT waveOutGetVolume() { PLACEHOLDER(); }
void DLL_EXPORT waveOutMessage() { PLACEHOLDER(); }
void DLL_EXPORT waveOutOpen() { PLACEHOLDER(); }
void DLL_EXPORT waveOutPause() { PLACEHOLDER(); }
void DLL_EXPORT waveOutPrepareHeader() { PLACEHOLDER(); }
void DLL_EXPORT waveOutReset() { PLACEHOLDER(); }
void DLL_EXPORT waveOutRestart() { PLACEHOLDER(); }
void DLL_EXPORT waveOutSetPitch() { PLACEHOLDER(); }
void DLL_EXPORT waveOutSetPlaybackRate() { PLACEHOLDER(); }
void DLL_EXPORT waveOutSetVolume() { PLACEHOLDER(); }
void DLL_EXPORT waveOutUnprepareHeader() { PLACEHOLDER(); }
void DLL_EXPORT waveOutWrite() { PLACEHOLDER(); }
void DLL_EXPORT wid32Message() { PLACEHOLDER(); }
void DLL_EXPORT wod32Message() { PLACEHOLDER(); }


inline void fixMethod(void* ptr, char* fn)
{
    // void* GetProc(const char* proc);
    unsigned char* source = ((unsigned char*)ptr) + 1;
    unsigned char* target = GetProc(fn);
    *(unsigned int*)source = target - source - 4;
}

void fixImport()
{
    fixMethod(&unkWinmm1, (char*)2);
    fixMethod(&mciExecute, "mciExecute");
    fixMethod(&CloseDriver, "CloseDriver");
    fixMethod(&DefDriverProc, "DefDriverProc");
    fixMethod(&DriverCallback, "DriverCallback");
    fixMethod(&DrvGetModuleHandle, "DrvGetModuleHandle");
    fixMethod(&GetDriverModuleHandle, "GetDriverModuleHandle");
    fixMethod(&NotifyCallbackData, "NotifyCallbackData");
    fixMethod(&OpenDriver, "OpenDriver");
    fixMethod(&PlaySound, "PlaySound");
    fixMethod(&PlaySoundA, "PlaySoundA");
    fixMethod(&PlaySoundW, "PlaySoundW");
    fixMethod(&SendDriverMessage, "SendDriverMessage");
    fixMethod(&WOW32DriverCallback, "WOW32DriverCallback");
    fixMethod(&WOW32ResolveMultiMediaHandle, "WOW32ResolveMultiMediaHandle");
    fixMethod(&WOWAppExit, "WOWAppExit");
    fixMethod(&aux32Message, "aux32Message");
    fixMethod(&auxGetDevCapsA, "auxGetDevCapsA");
    fixMethod(&auxGetDevCapsW, "auxGetDevCapsW");
    fixMethod(&auxGetNumDevs, "auxGetNumDevs");
    fixMethod(&auxGetVolume, "auxGetVolume");
    fixMethod(&auxOutMessage, "auxOutMessage");
    fixMethod(&auxSetVolume, "auxSetVolume");
    fixMethod(&joy32Message, "joy32Message");
    fixMethod(&joyConfigChanged, "joyConfigChanged");
    fixMethod(&joyGetDevCapsA, "joyGetDevCapsA");
    fixMethod(&joyGetDevCapsW, "joyGetDevCapsW");
    fixMethod(&joyGetNumDevs, "joyGetNumDevs");
    fixMethod(&joyGetPos, "joyGetPos");
    fixMethod(&joyGetPosEx, "joyGetPosEx");
    fixMethod(&joyGetThreshold, "joyGetThreshold");
    fixMethod(&joyReleaseCapture, "joyReleaseCapture");
    fixMethod(&joySetCapture, "joySetCapture");
    fixMethod(&joySetThreshold, "joySetThreshold");
    fixMethod(&mci32Message, "mci32Message");
    fixMethod(&mciDriverNotify, "mciDriverNotify");
    fixMethod(&mciDriverYield, "mciDriverYield");
    fixMethod(&mciFreeCommandResource, "mciFreeCommandResource");
    fixMethod(&mciGetCreatorTask, "mciGetCreatorTask");
    fixMethod(&mciGetDeviceIDA, "mciGetDeviceIDA");
    fixMethod(&mciGetDeviceIDFromElementIDA, "mciGetDeviceIDFromElementIDA");
    fixMethod(&mciGetDeviceIDFromElementIDW, "mciGetDeviceIDFromElementIDW");
    fixMethod(&mciGetDeviceIDW, "mciGetDeviceIDW");
    fixMethod(&mciGetDriverData, "mciGetDriverData");
    fixMethod(&mciGetErrorStringA, "mciGetErrorStringA");
    fixMethod(&mciGetErrorStringW, "mciGetErrorStringW");
    fixMethod(&mciGetYieldProc, "mciGetYieldProc");
    fixMethod(&mciLoadCommandResource, "mciLoadCommandResource");
    fixMethod(&mciSendCommandA, "mciSendCommandA");
    fixMethod(&mciSendCommandW, "mciSendCommandW");
    fixMethod(&mciSendStringA, "mciSendStringA");
    fixMethod(&mciSendStringW, "mciSendStringW");
    fixMethod(&mciSetDriverData, "mciSetDriverData");
    fixMethod(&mciSetYieldProc, "mciSetYieldProc");
    fixMethod(&mid32Message, "mid32Message");
    fixMethod(&midiConnect, "midiConnect");
    fixMethod(&midiDisconnect, "midiDisconnect");
    fixMethod(&midiInAddBuffer, "midiInAddBuffer");
    fixMethod(&midiInClose, "midiInClose");
    fixMethod(&midiInGetDevCapsA, "midiInGetDevCapsA");
    fixMethod(&midiInGetDevCapsW, "midiInGetDevCapsW");
    fixMethod(&midiInGetErrorTextA, "midiInGetErrorTextA");
    fixMethod(&midiInGetErrorTextW, "midiInGetErrorTextW");
    fixMethod(&midiInGetID, "midiInGetID");
    fixMethod(&midiInGetNumDevs, "midiInGetNumDevs");
    fixMethod(&midiInMessage, "midiInMessage");
    fixMethod(&midiInOpen, "midiInOpen");
    fixMethod(&midiInPrepareHeader, "midiInPrepareHeader");
    fixMethod(&midiInReset, "midiInReset");
    fixMethod(&midiInStart, "midiInStart");
    fixMethod(&midiInStop, "midiInStop");
    fixMethod(&midiInUnprepareHeader, "midiInUnprepareHeader");
    fixMethod(&midiOutCacheDrumPatches, "midiOutCacheDrumPatches");
    fixMethod(&midiOutCachePatches, "midiOutCachePatches");
    fixMethod(&midiOutClose, "midiOutClose");
    fixMethod(&midiOutGetDevCapsA, "midiOutGetDevCapsA");
    fixMethod(&midiOutGetDevCapsW, "midiOutGetDevCapsW");
    fixMethod(&midiOutGetErrorTextA, "midiOutGetErrorTextA");
    fixMethod(&midiOutGetErrorTextW, "midiOutGetErrorTextW");
    fixMethod(&midiOutGetID, "midiOutGetID");
    fixMethod(&midiOutGetNumDevs, "midiOutGetNumDevs");
    fixMethod(&midiOutGetVolume, "midiOutGetVolume");
    fixMethod(&midiOutLongMsg, "midiOutLongMsg");
    fixMethod(&midiOutMessage, "midiOutMessage");
    fixMethod(&midiOutOpen, "midiOutOpen");
    fixMethod(&midiOutPrepareHeader, "midiOutPrepareHeader");
    fixMethod(&midiOutReset, "midiOutReset");
    fixMethod(&midiOutSetVolume, "midiOutSetVolume");
    fixMethod(&midiOutShortMsg, "midiOutShortMsg");
    fixMethod(&midiOutUnprepareHeader, "midiOutUnprepareHeader");
    fixMethod(&midiStreamClose, "midiStreamClose");
    fixMethod(&midiStreamOpen, "midiStreamOpen");
    fixMethod(&midiStreamOut, "midiStreamOut");
    fixMethod(&midiStreamPause, "midiStreamPause");
    fixMethod(&midiStreamPosition, "midiStreamPosition");
    fixMethod(&midiStreamProperty, "midiStreamProperty");
    fixMethod(&midiStreamRestart, "midiStreamRestart");
    fixMethod(&midiStreamStop, "midiStreamStop");
    fixMethod(&mixerClose, "mixerClose");
    fixMethod(&mixerGetControlDetailsA, "mixerGetControlDetailsA");
    fixMethod(&mixerGetControlDetailsW, "mixerGetControlDetailsW");
    fixMethod(&mixerGetDevCapsA, "mixerGetDevCapsA");
    fixMethod(&mixerGetDevCapsW, "mixerGetDevCapsW");
    fixMethod(&mixerGetID, "mixerGetID");
    fixMethod(&mixerGetLineControlsA, "mixerGetLineControlsA");
    fixMethod(&mixerGetLineControlsW, "mixerGetLineControlsW");
    fixMethod(&mixerGetLineInfoA, "mixerGetLineInfoA");
    fixMethod(&mixerGetLineInfoW, "mixerGetLineInfoW");
    fixMethod(&mixerGetNumDevs, "mixerGetNumDevs");
    fixMethod(&mixerMessage, "mixerMessage");
    fixMethod(&mixerOpen, "mixerOpen");
    fixMethod(&mixerSetControlDetails, "mixerSetControlDetails");
    fixMethod(&mmDrvInstall, "mmDrvInstall");
    fixMethod(&mmGetCurrentTask, "mmGetCurrentTask");
    fixMethod(&mmTaskBlock, "mmTaskBlock");
    fixMethod(&mmTaskCreate, "mmTaskCreate");
    fixMethod(&mmTaskSignal, "mmTaskSignal");
    fixMethod(&mmTaskYield, "mmTaskYield");
    fixMethod(&mmioAdvance, "mmioAdvance");
    fixMethod(&mmioAscend, "mmioAscend");
    fixMethod(&mmioClose, "mmioClose");
    fixMethod(&mmioCreateChunk, "mmioCreateChunk");
    fixMethod(&mmioDescend, "mmioDescend");
    fixMethod(&mmioFlush, "mmioFlush");
    fixMethod(&mmioGetInfo, "mmioGetInfo");
    fixMethod(&mmioInstallIOProcA, "mmioInstallIOProcA");
    fixMethod(&mmioInstallIOProcW, "mmioInstallIOProcW");
    fixMethod(&mmioOpenA, "mmioOpenA");
    fixMethod(&mmioOpenW, "mmioOpenW");
    fixMethod(&mmioRead, "mmioRead");
    fixMethod(&mmioRenameA, "mmioRenameA");
    fixMethod(&mmioRenameW, "mmioRenameW");
    fixMethod(&mmioSeek, "mmioSeek");
    fixMethod(&mmioSendMessage, "mmioSendMessage");
    fixMethod(&mmioSetBuffer, "mmioSetBuffer");
    fixMethod(&mmioSetInfo, "mmioSetInfo");
    fixMethod(&mmioStringToFOURCCA, "mmioStringToFOURCCA");
    fixMethod(&mmioStringToFOURCCW, "mmioStringToFOURCCW");
    fixMethod(&mmioWrite, "mmioWrite");
    fixMethod(&mmsystemGetVersion, "mmsystemGetVersion");
    fixMethod(&mod32Message, "mod32Message");
    fixMethod(&mxd32Message, "mxd32Message");
    fixMethod(&sndPlaySoundA, "sndPlaySoundA");
    fixMethod(&sndPlaySoundW, "sndPlaySoundW");
    fixMethod(&tid32Message, "tid32Message");
    fixMethod(&timeBeginPeriod, "timeBeginPeriod");
    fixMethod(&timeEndPeriod, "timeEndPeriod");
    fixMethod(&timeGetDevCaps, "timeGetDevCaps");
    fixMethod(&timeGetSystemTime, "timeGetSystemTime");
    fixMethod(&timeGetTime, "timeGetTime");
    fixMethod(&timeKillEvent, "timeKillEvent");
    fixMethod(&timeSetEvent, "timeSetEvent");
    fixMethod(&waveInAddBuffer, "waveInAddBuffer");
    fixMethod(&waveInClose, "waveInClose");
    fixMethod(&waveInGetDevCapsA, "waveInGetDevCapsA");
    fixMethod(&waveInGetDevCapsW, "waveInGetDevCapsW");
    fixMethod(&waveInGetErrorTextA, "waveInGetErrorTextA");
    fixMethod(&waveInGetErrorTextW, "waveInGetErrorTextW");
    fixMethod(&waveInGetID, "waveInGetID");
    fixMethod(&waveInGetNumDevs, "waveInGetNumDevs");
    fixMethod(&waveInGetPosition, "waveInGetPosition");
    fixMethod(&waveInMessage, "waveInMessage");
    fixMethod(&waveInOpen, "waveInOpen");
    fixMethod(&waveInPrepareHeader, "waveInPrepareHeader");
    fixMethod(&waveInReset, "waveInReset");
    fixMethod(&waveInStart, "waveInStart");
    fixMethod(&waveInStop, "waveInStop");
    fixMethod(&waveInUnprepareHeader, "waveInUnprepareHeader");
    fixMethod(&waveOutBreakLoop, "waveOutBreakLoop");
    fixMethod(&waveOutClose, "waveOutClose");
    fixMethod(&waveOutGetDevCapsA, "waveOutGetDevCapsA");
    fixMethod(&waveOutGetDevCapsW, "waveOutGetDevCapsW");
    fixMethod(&waveOutGetErrorTextA, "waveOutGetErrorTextA");
    fixMethod(&waveOutGetErrorTextW, "waveOutGetErrorTextW");
    fixMethod(&waveOutGetID, "waveOutGetID");
    fixMethod(&waveOutGetNumDevs, "waveOutGetNumDevs");
    fixMethod(&waveOutGetPitch, "waveOutGetPitch");
    fixMethod(&waveOutGetPlaybackRate, "waveOutGetPlaybackRate");
    fixMethod(&waveOutGetPosition, "waveOutGetPosition");
    fixMethod(&waveOutGetVolume, "waveOutGetVolume");
    fixMethod(&waveOutMessage, "waveOutMessage");
    fixMethod(&waveOutOpen, "waveOutOpen");
    fixMethod(&waveOutPause, "waveOutPause");
    fixMethod(&waveOutPrepareHeader, "waveOutPrepareHeader");
    fixMethod(&waveOutReset, "waveOutReset");
    fixMethod(&waveOutRestart, "waveOutRestart");
    fixMethod(&waveOutSetPitch, "waveOutSetPitch");
    fixMethod(&waveOutSetPlaybackRate, "waveOutSetPlaybackRate");
    fixMethod(&waveOutSetVolume, "waveOutSetVolume");
    fixMethod(&waveOutUnprepareHeader, "waveOutUnprepareHeader");
    fixMethod(&waveOutWrite, "waveOutWrite");
    fixMethod(&wid32Message, "wid32Message");
    fixMethod(&wod32Message, "wod32Message");
}

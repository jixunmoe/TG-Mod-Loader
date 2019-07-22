#pragma once

#include <stddef.h>
#include <stdint.h>
#include <windows.h>

#define DLL_EXPORT __declspec(dllexport)

void DLL_EXPORT InitMod(uint8_t* addr, uint32_t size, uint8_t* addr_rdata, uint32_t size_rdata, uint8_t* addr_data, uint32_t size_data);

/*
 * Mouse sensitivity adjuster for Grand Theft Auto: Vice City
 * Author: sfwidde ([R3V]Kelvin)
 * 2024-05-15
 */

#ifndef MAIN_H
#define MAIN_H

#include <Windows.h>

#define MEMADDR_HWND    (*(HWND*)0x7897A4)
#define MEMADDR_MOUSE_X (*(FLOAT*)0x94DBD0) // Thx Hanney.
#define MEMADDR_MOUSE_Y (*(FLOAT*)0xA0D964) // Thx Hanney.

#define SENSADJ_CONFIG_FILE_NAME "MouseSensAdj.txt" // Same directory as gta-vc.exe

typedef struct
{
	float mouse_x;     // VC:MP 0.4 equivalent: game_sensitivity
	float mouse_y;     // VC:MP 0.4 equivalent: game_sensitivity_ratio
	int   trigger_key; // https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes
} SensAdjSettings;

#endif

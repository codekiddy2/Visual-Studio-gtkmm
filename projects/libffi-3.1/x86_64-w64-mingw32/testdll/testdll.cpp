// testdll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

extern "C"
{
__declspec(dllexport) int testFunc1(int number)
{
	return number + 99;
}
}
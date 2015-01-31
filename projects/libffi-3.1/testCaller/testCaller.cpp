// testCaller.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ffi.h"


int testFunc1(int number)
{
	return number + 99;
}

typedef int (__cdecl *MYPROC)(int);

int _tmain(int argc, _TCHAR* argv[])
{
	ffi_cif cif;
	ffi_type *args[1];
	void* values[1];
	int value1 = 47;
	int rvalue;

	args[0] = &ffi_type_sint32;
	values[0] = &value1;

	HINSTANCE hinstLib = LoadLibrary(TEXT("testdll.dll"));
	if (NULL != hinstLib)
	{
		MYPROC procAdd = (MYPROC)GetProcAddress(hinstLib, "testFunc1");

		if (NULL != procAdd)
		{
			ffi_prep_cif(&cif, FFI_DEFAULT_ABI, 1, &ffi_type_sint32, args);
			ffi_call(&cif, FFI_FN(procAdd), &rvalue, values);
		}
		FreeLibrary(hinstLib);
	}

	printf("Result: %d\n", rvalue);

	return 0;
}


```
EXAMPLE FOR /X64 /DEBUG ENVIRONMENT AND PROJECT SETUP IN MICROSOFT SHELL
```

	set ROOT_DIR=D:\Github\Visual-Studio-gtkmm\output\v140\Debug\x64
	set PATH=%ROOT_DIR%\bin;%PATH%
	set LIB=%ROOT_DIR%\lib;%LIB%
	set INCLUDE=%ROOT_DIR%\include;%ROOT_DIR%\include\bzip2;%ROOT_DIR%\include\zlib;;%INCLUDE%

	mkdir msvc-140
	cd msvc-140
	cmake -D CMAKE_BUILD_TYPE=Debug -G "Visual Studio 14 Win64" ../

OR

	cmake-gui (even better)


**************************************************************************************************************************************************************************
**************************************************************************************************************************************************************************
**************************************************************************************************************************************************************************

SETUP IN UNIX SHELL

	export PATH=/d/gtkmm/output/Debug/x64/bin:$PATH
	export LDFLAGS=-LD:/gtkmm/output/Debug/x64/lib:$LDFLAGS

	export CFLAGS=-I/d/gtkmm/output/Debug/x64/include:$CFLAGS
	export CPPFLAGS=-I/d/gtkmm/output/Debug/x64/include:$CPPFLAGS
	export CXXFLAGS=-I/d/gtkmm/output/Debug/x64/include:$CXXFLAGS

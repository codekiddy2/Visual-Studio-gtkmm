**Cmake usage**

>Example for /X64 /DEBUG environment setup in command prompt

	set ROOT_DIR=D:\Github\Visual-Studio-gtkmm\output\v140\Debug\x64
	set PATH=%ROOT_DIR%\bin;%PATH%
	set LIB=%ROOT_DIR%\lib;%LIB%
	set INCLUDE=%ROOT_DIR%\include;%ROOT_DIR%\include\bzip2;%ROOT_DIR%\include\zlib;;%INCLUDE%

	mkdir msvc-140
	cd msvc-140
	cmake -D CMAKE_BUILD_TYPE=Debug -G "Visual Studio 14 Win64" ../

>OR

	cmake-gui (even better)

>Setup in mozilla-build or MSYS2

	export PATH=/d/gtkmm/output/Debug/x64/bin:$PATH
	export LDFLAGS=-LD:/gtkmm/output/Debug/x64/lib:$LDFLAGS

	export CFLAGS=-I/d/gtkmm/output/Debug/x64/include:$CFLAGS
	export CPPFLAGS=-I/d/gtkmm/output/Debug/x64/include:$CPPFLAGS
	export CXXFLAGS=-I/d/gtkmm/output/Debug/x64/include:$CXXFLAGS

>Example used to generate libtiff solution

	set ROOT_DIR=D:\Github\Visual-Studio-gtkmm\output\v140\Release\x64
	set LIB=%ROOT_DIR%\lib;%LIB%
	set INCLUDE_DIR=%ROOT_DIR%\include
	set INCLUDE=%INCLUDE_DIR%;%INCLUDE_DIR%\zlib;%INCLUDE_DIR%\jpeg-turbo;%INCLUDE_DIR%\lzma;%INCLUDE%
	
	
	set ZLIB_INCLUDE_DIR=%INCLUDE_DIR%\zlib
	set JPEG_INCLUDE_DIR=%INCLUDE_DIR%\jpeg-turbo
	set GLUT_INCLUDE_DIR=%INCLUDE_DIR%\GL
	set LIBLZMA_INCLUDE_DIR=%INCLUDE_DIR%\lzma
	
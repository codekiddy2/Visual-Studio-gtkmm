**Example how to use mozilla-build with MS SDK**

x64 configuration:

>Open x64 Visual Studio command promt and run:

	set ROOT_DIR=D:\gtkmm\output\Debug\x64
	set CL=@debug-64.compiler
	set PATH=%ROOT_DIR%\bin;%PATH%
	set LIB=%ROOT_DIR%\lib;%LIB%

	set MOZBUILDDIR=D:\gtkmm\install\mozilla-build
	set MOZILLABUILD=%MOZBUILDDIR%
	set MOZ_TOOLS=%MOZBUILDDIR%moztools-x64
	start /d "%USERPROFILE%" "" "%MOZILLABUILD%"\msys\bin\bash --login -i


	./configure CFLAGS='' CXXFLAGS='' CPPFLAGS='' CC=cl CXX=cl CPP='cl -nologo -EP' AR=lib LD=link --build=x86_64-w64-mingw32 --prefix=/d/output
	make
	make install

	export CFLAGS='-Zi -W3 -WX- -Od -Ob0 -D WIN32 -D _WINDOWS -D _DEBUG -D _CRT_SECURE_NO_WARNINGS -D _SCL_SECURE_NO_WARNINGS -D _CRT_NONSTDC_NO_DEPRECATE -D NTDDI_WIN7=0x06010000 -D _WIN32_WINNT_WIN7=0x0601 -D _UNICODE -D UNICODE -GF- -Gm -RTC1 -MDd -GS -Gy- -Qpar- -fp:precise -fp:except- -Zc:wchar_t -Zc:forScope -GR'
	export CPPFLAGS='-Zi -W3 -WX- -Od -Ob0 -D WIN32 -D _WINDOWS -D _DEBUG -D _CRT_SECURE_NO_WARNINGS -D _SCL_SECURE_NO_WARNINGS -D _CRT_NONSTDC_NO_DEPRECATE -D NTDDI_WIN7=0x06010000 -D _WIN32_WINNT_WIN7=0x0601 -D _UNICODE -D UNICODE -GF- -Gm -RTC1 -MDd -GS -Gy- -Qpar- -fp:precise -fp:except- -Zc:wchar_t -Zc:forScope -GR'
	export CXXFLAGS='-Zi -W3 -WX- -Od -Ob0 -D WIN32 -D _WINDOWS -D _DEBUG -D _CRT_SECURE_NO_WARNINGS -D _SCL_SECURE_NO_WARNINGS -D _CRT_NONSTDC_NO_DEPRECATE -D NTDDI_WIN7=0x06010000 -D _WIN32_WINNT_WIN7=0x0601 -D _UNICODE -D UNICODE -GF- -Gm -RTC1 -MDd -GS -Gy- -Qpar- -fp:precise -fp:except- -Zc:wchar_t -Zc:forScope -GR'
	export LIBS=-lkernel32.lib -luser32.lib -lgdi32.lib -lwinspool.lib -lcomdlg32.lib -ladvapi32.lib -lshell32.lib -lole32.lib -loleaut32.lib -luuid.lib -lodbc32.lib -lodbccp32.lib
	export LDFLAGS=''

note that above *.compiler file is a file contaning both compiler and linker flags.

simple rules to minimize errors:

* in MS sheel path names must not contain '/' while in unix shell is opposite. ie. compiler settings will not work!
* also CL flag must be given a full path, so the above example will not work if libtool starts to ie: cd.. cd../.. -> ERROR 100%
* in UNIX shell flags passed directly to configure are better than exporting them into varibles
* includes and libs should be defined in compiler file, in some cases configure script can't find headers..
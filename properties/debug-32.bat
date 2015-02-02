set ROOT_DIR=D:\gtkmm\output\Debug\Win32
set CL=@D:\gtkmm\properties\debug-32.compiler
set PATH=%ROOT_DIR%\bin;%PATH%
set LIB=%ROOT_DIR%\lib;%LIB%
set MOZBUILDDIR=D:\gtkmm\install\mozilla-build
set MOZILLABUILD=%MOZBUILDDIR%
set MOZ_TOOLS=%MOZBUILDDIR%moztools
start /d "%USERPROFILE%" "" "%MOZILLABUILD%"\msys\bin\bash --login -i
exit
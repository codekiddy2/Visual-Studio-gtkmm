**Preparing MSYS2 environment**

MSYS2 x64 shell is located in:

	D:\Github\Install\msys64\mingw64_shell.bat

MSYS2 x86 shell is located in:
	
	D:\Github\Install\msys64\mingw32_shell.bat

>Depending on your build type open one of them and update the system packages (confirm prompt when asked)

	pacman --needed -Sy bash pacman pacman-mirrors msys2-runtime

>Restart shell and

	pacman -Su
	
>Install tools


	pacman -S make autoconf autogen automake icon-naming-utils intltool wget tar itstool p7zip bison

	
>suspended: do not install these..

	pacman -S pkg-config
	pacman -S mingw-w64-x86_64-gcc
	pacman -S flex

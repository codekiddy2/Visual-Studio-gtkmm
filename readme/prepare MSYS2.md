**Preparing MSYS2 environment**

MSYS2 x64 shell is located in:

	D:\Github\Install\msys64\mingw64_shell.bat

MSYS2 x86 shell is located in:
	
	D:\Github\Install\msys64\mingw32_shell.bat

>Depending on your build type open one of them and update the system packages

	pacman --needed -Sy bash pacman pacman-mirrors msys2-runtime

>Restart shell and

	pacman -Su
	
>Install tools one by one and confirm prompt when asked

	pacman -S pkg-config
	pacman -S mingw-w64-x86_64-gcc
	pacman -S make
	pacman -S autoconf
	pacman -S autogen
	pacman -S automake
	pacman -S icon-naming-utils
	pacman -S intltool
	pacman -S wget
	pacman -S tar
	pacman -S itstool
	pacman -S p7zip
	pacman -S bison
	pacman -S flex
	
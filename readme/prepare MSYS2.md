```
Preparing MSYS2 environment
```
>Update the system packages:
	pacman --needed -Sy bash pacman pacman-mirrors msys2-runtime

>Restart shell and:
	pacman -Su
	
>Install tools
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
	
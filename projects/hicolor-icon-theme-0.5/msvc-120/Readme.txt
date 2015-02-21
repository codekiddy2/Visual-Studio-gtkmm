It's not easy to compile icons but here is tested solution:

I made a tutorial on how to install latest gtkmm with MSYS2, and the easiest way to
compile gnome icons is with MSYS2, you can read how to get started with MSYS2 here:
http://gtkmm-installation.blogspot.com/

Please note, that you only need to follow the part on setting up MSYS2! not whole
tutorial.
You will for sure encounter errors, on the tutorial page you can find how to fix these.

once done install following tools with MSYS2: (X64 setup)

pacman -S mingw-w64-x86_64-make
pacman -S make
pacman -S automake1.15
pacman -S autoconf
pacman -S autogen
pacman -S mingw-w64-x86_64-icon-naming-utils
pacman -S mingw-w64-x86_64-gnome-icon-theme-symbolic
pacman -S intltool
pacman -S itstool

official sources can be obtained from http://www.freedesktop.org/wiki/Software/icon-theme/
Once you have the above tools, copy configuration files from msvc-120 folder
into sources root, and run the debug-64 bat from VS cmd x64
then cd into sources root directory and run the debug-64.sh to configure.
compile and install by make && make install

make sure you adjust these configuration files with your system before running them
to avoid errors.
#set environment
export ROOT_DIR=/d/GitHub/Visual-Studio-gtkmm/output/v140/Release/Win32
export PROJECT_DIR=/d/GitHub/Visual-Studio-gtkmm/projects/master/msvc-140/compile-icons

#download adwaita icon theme
cd $PROJECT_DIR
wget http://ftp.acc.umu.se/pub/gnome/sources/adwaita-icon-theme/3.18/adwaita-icon-theme-3.18.0.tar.xz
tar -Jxvf adwaita-icon-theme-3.18.0.tar.xz
rm adwaita-icon-theme-3.18.0.tar.xz
cd adwaita-icon-theme-3.18.0

#build adwaita icon theme
make clean
./configure CC='' CXX=cl CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --build=i686-pc-mingw32 --host=i686-pc-mingw32 --prefix=$ROOT_DIR
make
make install

#download hicolor icon theme
cd $PROJECT_DIR
wget http://icon-theme.freedesktop.org/releases/hicolor-icon-theme-0.15.tar.xz
tar -Jxvf hicolor-icon-theme-0.15.tar.xz
rm hicolor-icon-theme-0.15.tar.xz
cd hicolor-icon-theme-0.15

#build hicolor icon theme
make clean
./configure CC='' CXX=cl CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --build=i686-pc-mingw32 --host=i686-pc-mingw32 --prefix=$ROOT_DIR
make
make install

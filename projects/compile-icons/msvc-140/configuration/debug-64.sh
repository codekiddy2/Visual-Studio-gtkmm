#set environment
export ROOT_DIR=/d/GitHub/Visual-Studio-gtkmm/output/v140/Debug/x64
export PATH=$ROOT_DIR:$PATH:
export PROJECT_DIR=/d/GitHub/Visual-Studio-gtkmm/projects/compile-icons

#download adwaita icon theme
cd $PROJECT_DIR
wget http://ftp.acc.umu.se/pub/gnome/sources/adwaita-icon-theme/3.18/adwaita-icon-theme-3.18.0.tar.xz
tar -Jxvf adwaita-icon-theme-3.18.0.tar.xz
rm adwaita-icon-theme-3.18.0.tar.xz
cd adwaita-icon-theme-3.18.0

#build adwaita icon theme
./configure CC='' CXX=cl CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --build=x86_64-w64-mingw32 --host=x86_64-w64-mingw32 --prefix=$ROOT_DIR
make
make install

#build will fail, copy index theme
cp index.theme $ROOT_DIR/share/icons/Adwaita

#download prebuilt icons
#took link from https://wiki.gnome.org/action/show/Projects/GTK+/Win32/MSVCCompilationOfGTKStack?action=show&redirect=GTK%2B%2FWin32%2FMSVCCompilationOfGTKStack
cd $ROOT_DIR/share/icons/Adwaita
wget https://dl.dropboxusercontent.com/u/30316581/adwaita-icons-theme-png-3.14.0.7z
tar -Jxvf adwaita-icons-theme-png-3.14.0.7z
rm adwaita-icons-theme-png-3.14.0.7z

#update cache
gtk-update-icon-cache-3.0 $ROOT_DIR/share/icons/Adwaita
gtk-update-icon-cache-3.0 -v $ROOT_DIR/share/icons/Adwaita

#download hicolor icon theme
cd $PROJECT_DIR
wget http://icon-theme.freedesktop.org/releases/hicolor-icon-theme-0.15.tar.xz
tar -Jxvf hicolor-icon-theme-0.15.tar.xz
rm hicolor-icon-theme-0.15.tar.xz
cd hicolor-icon-theme-0.15

#build hicolor icon theme
./configure CC='' CXX=cl CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --build=x86_64-w64-mingw32 --host=x86_64-w64-mingw32 --prefix=$ROOT_DIR
make
make install

#update hicolor icon theme
$ROOT_DIR/bin/gtk-update-icon-cache-3.0 $ROOT_DIR/share/icons/hicolor
$ROOT_DIR/bin/gtk-update-icon-cache-3.0 -v $ROOT_DIR/share/icons/hicolor
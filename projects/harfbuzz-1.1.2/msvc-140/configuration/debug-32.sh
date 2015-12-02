export ROOT_DIR=/d/Github/Visual-Studio-gtkmm/output/v140/Debug/Win32
export INSTALL_DIR=/d/Github/Install

#pkgconfig path must be set with /d/../../
export PKG_CONFIG_PATH=$ROOT_DIR/share/pkgconfig

make clean
#set -MDd in CFLAGS, CXXFLAGS, CPPFLAGS for cases when CL variable is not set, ie. libffi wrapper always uses -MD, so we override this
./configure --with-gobject=yes --with-glib=yes CC=cl CXX=cl CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --enable-silent-rules --enable-shared --enable-static --build=i686-pc-mingw32 --host=i686-pc-mingw32 --prefix=$ROOT_DIR
make

export ROOT_DIR=/d/Github/Visual-Studio-gtkmm/output/v140/Debug/x64
export INSTALL_DIR=/d/Github/Install

#pkgconfig path must be set with /d/../../
export PKG_CONFIG_PATH=$ROOT_DIR/share/pkgconfig

make clean
#set -MDd in CFLAGS, CXXFLAGS, CPPFLAGS for cases when CL variable is not set, ie. libffi wrapper always uses -MD, so we override this
./configure CC=cl CXX=cl CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --enable-silent-rules --enable-shared --enable-static --x86_64-w64-mingw32 --x86_64-w64-mingw32 --prefix=$ROOT_DIR
make

make clean
./configure --enable-shared --enable-static CC=$(pwd)/msvcc.sh CXX=$(pwd)/msvcc.sh CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --build=i686-pc-mingw32 --host=i686-pc-mingw32 --prefix=/d/GitHub/Visual-Studio-gtkmm/output/v140/Release/Win32
make
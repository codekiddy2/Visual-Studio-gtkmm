make clean
./configure --enable-silent-rules --enable-shared --enable-static CC=$(pwd)/msvcc.sh CXX=$(pwd)/msvcc.sh CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='-MDd' CXXFLAGS='-MDd' CPPFLAGS='-MDd' LDFLAGS='' LIBS='' --build=i686-pc-mingw32 --host=i686-pc-mingw32 --prefix=/d/GitHub/Visual-Studio-gtkmm/output/v140/Debug/Win32
make
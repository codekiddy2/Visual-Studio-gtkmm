make clean
./configure --enable-shared --enable-static CC="$(pwd)/msvcc.sh -m64" CXX="$(pwd)/msvcc.sh -m64" CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --build=x86_64-w64-mingw32 --host=x86_64-w64-mingw32 --prefix=/d/GitHub/Visual-Studio-gtkmm/output/v140/Release/x64
make
export ROOT_DIR=/d/GitHub/Visual-Studio-gtkmm/output/v140/Debug/x64
export PATH=$ROOT_DIR:$PATH
./configure GTK_ENCODE_SYMBOLIC_SVG=$ROOT_DIR/gtk-encode-symbolic-svg CC='' CXX=cl CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --build=x86_64-w64-mingw32 --host=x86_64-w64-mingw32 --prefix=$ROOT_DIR
make
make install
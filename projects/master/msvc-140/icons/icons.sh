#build adwaita icon theme
cd $PROJECTS_DIR_M/adwaita-icon-theme*
make clean
./configure CC='' CXX=cl CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --build=$BUILD_M --host=$HOST_M --prefix=$ROOT_DIR_M
make
make install

#build hicolor icon theme
cd $PROJECTS_DIR_M/hicolor-icon-theme*
make clean
./configure CC='' CXX=cl CPP='cl -nologo -EP' CXXCPP='cl -E' AR=lib LD=link CFLAGS='' CXXFLAGS='' CPPFLAGS='' LDFLAGS='' LIBS='' --build=$BUILD_M --host=$HOST_M --prefix=$ROOT_DIR_M
make
make install

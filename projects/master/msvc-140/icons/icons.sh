#build adwaita icon theme
if [[ ! -d $INTERMEDIATE_DIR_M/icons/adwaita-icon-theme ]]
then
	mkdir --parents $INTERMEDIATE_DIR_M/icons/adwaita-icon-theme
fi

#get adwaita full path name
cd $PROJECTS_DIR_M/adwaita-icon-theme*
ADWAITA_DIR=$(pwd)

cd $INTERMEDIATE_DIR_M/icons/adwaita-icon-theme

$ADWAITA_DIR/configure \
CC="$CC_M" \
CXX="CXX_M" \
CPP="$CPP_M" \
CXXCPP="$CXXCPP_M" \
AR="$AR_M" \
LD="$LD_M" \
CFLAGS="$CFLAGS_M" \
CXXFLAGS="$CXXFLAGS_M" \
CPPFLAGS="$CPPFLAGS_M" \
LDFLAGS="$LDFLAGS_M" \
LIBS="$LIBS_M" \
--build="$BUILD_M" \
--host="$HOST_M" \
--target="$TARGET_M" \
--prefix="$ROOT_DIR_M"
make
make install

#build hicolor icon theme
if [[ ! -d $INTERMEDIATE_DIR_M/icons/hicolor-icon-theme ]]
then
	mkdir --parents $INTERMEDIATE_DIR_M/icons/hicolor-icon-theme
fi

#get hicolor full path name
cd $PROJECTS_DIR_M/adwaita-icon-theme*
HICOLOR_DIR=$(pwd)

cd $INTERMEDIATE_DIR_M/icons/hicolor-icon-theme

$HICOLOR_DIR/configure \
CC="$CC_M" \
CXX="CXX_M" \
CPP="$CPP_M" \
CXXCPP="$CXXCPP_M" \
AR="$AR_M" \
LD="$LD_M" \
CFLAGS="$CFLAGS_M" \
CXXFLAGS="$CXXFLAGS_M" \
CPPFLAGS="$CPPFLAGS_M" \
LDFLAGS="$LDFLAGS_M" \
LIBS="$LIBS_M" \
--build="$BUILD_M" \
--host="$HOST_M" \
--target="$TARGET_M" \
--prefix="$ROOT_DIR_M"
make
make install

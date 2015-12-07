
if [[ $CLEAN_CMD == true ]]
then
	if [[ -d $INTERMEDIATE_DIR_M ]]
	then
		cd $INTERMEDIATE_DIR_M
		make clean
	fi
fi

if [[ $MAKE_CMD == true ]]
then
	if [[ ! -d $INTERMEDIATE_DIR_M ]]
	then
		mkdir --parents $INTERMEDIATE_DIR_M
	fi

	cd $INTERMEDIATE_DIR_M

	if [[ $BUILD_M == i686-pc-mingw32 ]]
	then
		$SRC_DIR_M/configure $CONFIGURE_M --srcdir=$SRC_DIR_M \
		CC="$SRC_DIR_M/msvcc.sh" \
		CXX="$SRC_DIR_M/msvcc.sh" \
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
	else
		$SRC_DIR_M/configure $CONFIGURE_M --srcdir=$SRC_DIR_M \
		CC="$SRC_DIR_M/msvcc.sh -m64" \
		CXX="$SRC_DIR_M/msvcc.sh -m64" \
		CPP="$CPP_M" \
		CXXCPP="$CXXCPP_M" \
		AR="$AR_M" \
		LD="$LD_M" \
		CFLAGS="$CFLAGS_M $X64_FLAGS" \
		CXXFLAGS="$CXXFLAGS_M $X64_FLAGS" \
		CPPFLAGS="$CPPFLAGS_M $X64_FLAGS" \
		LDFLAGS="$LDFLAGS_M" \
		LIBS="$LIBS_M" \
		--build="$BUILD_M" \
		--host="$HOST_M" \
		--target="$TARGET_M" \
		--prefix="$ROOT_DIR_M"
	fi
	make
fi

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

	$SRC_DIR_M/configure \
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
fi

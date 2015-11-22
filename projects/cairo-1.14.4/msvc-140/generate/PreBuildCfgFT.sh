if exist $(FEATURES_DIR)$(Configuration).FT goto DONE_FT
echo #define CAIRO_HAS_FT_FONT 1 > $(FEATURES_DIR)$(Configuration).FT
echo #define CAIRO_HAS_FT_FONT 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
copy $(SRC_DIR)src\cairo-ft.h $(FEATURES_DIR)
:DONE_FT
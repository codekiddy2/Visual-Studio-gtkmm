if exist $(INTERMEDIATE_DIR)$(Configuration).FT goto DONE_FT
echo #define CAIRO_HAS_FT_FONT 1 > $(INTERMEDIATE_DIR)$(Configuration).FT
echo #define CAIRO_HAS_FT_FONT 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
copy $(SRC_DIR)src\cairo-ft.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
:DONE_FT
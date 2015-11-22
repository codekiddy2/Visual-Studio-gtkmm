if exist $(INTERMEDIATE_DIR)$(Configuration).GOBJECT goto DONE_GOBJECT
echo #define CAIRO_HAS_GOBJECT_FUNCTIONS 1 > $(ROOT_DIR)intermediate\$(SolutionName)cairo\$(Configuration).GOBJECT
echo #define CAIRO_HAS_GOBJECT_FUNCTIONS 1 >> $(ROOT_DIR)intermediate\$(SolutionName)cairo\$(Configuration).FEATURES
copy $(SRC_DIR)util\cairo-gobject\cairo-gobject.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
:DONE_GOBJECT
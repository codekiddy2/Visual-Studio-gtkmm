if exist $(FEATURES_DIR)$(Configuration).GL goto DONE_GL
echo #define CAIRO_HAS_GL_SURFACE 1 > $(FEATURES_DIR)$(Configuration).GL
echo #define CAIRO_HAS_WGL_FUNCTIONS 1 >> $(FEATURES_DIR)$(Configuration).GL
echo #define CAIRO_HAS_GL_SURFACE 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_WGL_FUNCTIONS 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
copy $(SRC_DIR)src\cairo-gl.h $(FEATURES_DIR)
:DONE_GL
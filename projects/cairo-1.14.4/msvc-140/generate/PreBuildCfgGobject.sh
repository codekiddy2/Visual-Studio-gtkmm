if exist $(FEATURES_DIR)$(Configuration).GOBJECT goto DONE_GOBJECT
echo #define CAIRO_HAS_GOBJECT_FUNCTIONS 1 > $(FEATURES_DIR)$(Configuration).GOBJECT
echo #define CAIRO_HAS_GOBJECT_FUNCTIONS 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
copy $(SRC_DIR)util\cairo-gobject\cairo-gobject.h $(FEATURES_DIR)
:DONE_GOBJECT
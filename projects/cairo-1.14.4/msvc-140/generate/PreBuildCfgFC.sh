if exist $(INTERMEDIATE_DIR)$(Configuration).FC goto DONE_FC
echo #define CAIRO_HAS_FC_FONT 1 > $(INTERMEDIATE_DIR)$(Configuration).FC
echo #define CAIRO_HAS_FC_FONT 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
:DONE_FC
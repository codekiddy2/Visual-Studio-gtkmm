if not exist $(FEATURES_DIR) mkdir $(FEATURES_DIR)
if exist $(FEATURES_DIR)$(Configuration).FEATURES goto DONE_CONFIG
if exist $(FEATURES_DIR)*.FEATURES del $(FEATURES_DIR)*.FEATURES
if exist $(FEATURES_DIR)*.FT del $(FEATURES_DIR)*.FT
if exist $(FEATURES_DIR)*.FC del $(FEATURES_DIR)*.FC
if exist $(FEATURES_DIR)*.GL del $(FEATURES_DIR)*.GL
if exist $(FEATURES_DIR)*.GOBJECT del $(FEATURES_DIR)*.GOBJECT
echo #define CAIRO_HAS_WIN32_SURFACE 1 > $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_WIN32_FONT 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_PNG_FUNCTIONS 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_IMAGE_SURFACE 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_PS_SURFACE 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_PDF_SURFACE 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_SVG_SURFACE 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_SCRIPT_SURFACE 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_TEE_SURFACE 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_XML_SURFACE 1 >> $(FEATURES_DIR)$(Configuration).FEATURES
:DONE_CONFIG
copy $(SRC_DIR)src\cairo.h $(FEATURES_DIR)
copy $(SRC_DIR)src\cairo-deprecated.h $(FEATURES_DIR)
copy $(SRC_DIR)src\cairo-pdf.h $(FEATURES_DIR)
copy $(SRC_DIR)src\cairo-ps.h $(FEATURES_DIR)
copy $(SRC_DIR)src\cairo-script.h $(FEATURES_DIR)
copy $(SRC_DIR)src\cairo-svg.h $(FEATURES_DIR)
copy $(SRC_DIR)src\cairo-tee.h $(FEATURES_DIR)
copy $(SRC_DIR)src\cairo-win32.h $(FEATURES_DIR)
copy $(SRC_DIR)src\cairo-xml.h $(FEATURES_DIR)
copy $(SRC_DIR)src\cairo-version.h $(FEATURES_DIR)
if exist $(INTERMEDIATE_DIR)$(Configuration).FEATURES goto DONE_CONFIG
if exist $(INTERMEDIATE_DIR)*.FEATURES del $(INTERMEDIATE_DIR)*.FEATURES
if exist $(INTERMEDIATE_DIR)*.FT del $(INTERMEDIATE_DIR)*.FT
if exist $(INTERMEDIATE_DIR)*.FC del $(INTERMEDIATE_DIR)*.FC
if exist $(INTERMEDIATE_DIR)*.GL del $(INTERMEDIATE_DIR)*.GL
if exist $(INTERMEDIATE_DIR)*.GOBJECT del $(INTERMEDIATE_DIR)*.GOBJECT
echo #define CAIRO_HAS_WIN32_SURFACE 1 > $(INTERMEDIATE_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_WIN32_FONT 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_PNG_FUNCTIONS 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_IMAGE_SURFACE 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_PS_SURFACE 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_PDF_SURFACE 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_SVG_SURFACE 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_SCRIPT_SURFACE 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_TEE_SURFACE 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
echo #define CAIRO_HAS_XML_SURFACE 1 >> $(INTERMEDIATE_DIR)$(Configuration).FEATURES
:DONE_CONFIG
mkdir $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo-deprecated.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo-pdf.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo-ps.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo-script.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo-svg.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo-tee.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo-win32.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo-xml.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
copy $(SRC_DIR)src\cairo-version.h $(ROOT_DIR)intermediate\$(SolutionName)\include\
**List of Projects that need configuration**

* libffi (mozilla-build)
* expat (cmake-gui) configuration is optional ?
* freeglut (cmake-gui) configuration is needed (for *.rc files)
* gettext (mozilla-build) configuration is optional
* pkg-config (mozilla-build) configuration is optional ?
* harfbuzz (msys2) configuration only when upgrading version (hb_gobject-enums)
* readline ?
* editline ?
* adwaita icon theme (msys2)
* hicolor icon theme (msys2)
* libjpeg (cmake) configuration is optional (needed for new versions)

**List of projects that use external tools**

* libjpeg (nasm)
* tiff (nmake)
* epoxy (nmake + unofficial package)
* GTK+ (python)
* libepoxy (python)
* gstreamer (bison)
* gstreamer(mm?) (flex)
* glib (python, perl)
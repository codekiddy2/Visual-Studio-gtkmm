PACKAGE
	-DEPENDENCIES

****************************
#undefined:

croco
rsvg
bzip
readline

****************************
iconv
zlib
ffi
libjpeg-turbo
expat
pcre	(included in glib, build extra for dll and use build with glib)
	(optional libs = libreadline, libeditline and libbz2)
glut

gettext
	-iconv (circular dependency)
	-expat (optional, configure script will not check for it /??)
	-libxml2 (optional, give also path for croco)

png
	-zlib

libxml2 (or expat, no dependencies for expat)
	-iconv
	-zlib
	-croco

tiff
	-zlib
	-libjpeg-turbo
	-GL glut

jasper
	-zlib
	-libjpeg-turbo
        -GL glut

pixman
	-libpng

glib
	-libffi
	-zlib
	-gettext
	-pcre(optional)

Freetype
	-harfbuzz (optional circular dependency, [freetype -> harfbuzz -> freetype])

harfbuzz (rebuild freetype with harbuzz support)
	-freetype
	-libjpeg-turbo
	-glib

Fontconfig
	-libxml2 or expat
	-freetype
	-glut?

gdk-pixbuf
	-libpng
	-glib

cairo
	-zlib
	-libpng
	-pixman
	-glib
	-gobject support

	(if building pango with font config then)
	-freetype
	-fontconfig
	-expat

Pango
	-glib
	-harfbuz
	-cairo
	-fontconfig (optional, cairo must be build with fontconfig too)

atk
	-glib


gtk+
	-pango
	-atk
	-gdk-pixbuf

libsigc++
glibmm
cairomm
pangomm
atkmm
gtkmm




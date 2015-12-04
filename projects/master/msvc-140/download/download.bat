@echo off

REM set wget command, -q for quiet mode, --show-progress to override quiet mode with progress bar only
REM --no-clobber do not download if file exists.
set WGET=%WGET_DIR% -q --show-progress --no-clobber


cd %COMPRESSED%

%WGET% http://downloads.sourceforge.net/project/freeglut/freeglut/3.0.0/freeglut-3.0.0.tar.gz
%WGET% http://downloads.sourceforge.net/project/libjpeg-turbo/1.4.2/libjpeg-turbo-1.4.2.tar.gz
%WGET% http://ftp.gnu.org/gnu/libiconv/libiconv-1.14.tar.gz
%WGET% http://zlib.net/zlib-1.2.8.tar.gz
%WGET% http://downloads.sourceforge.net/project/expat/expat/2.1.0/expat-2.1.0.tar.gz
%WGET% http://download.icu-project.org/files/icu4c/56.1/icu4c-56_1-src.zip
%WGET% http://www.bzip.org/1.0.6/bzip2-1.0.6.tar.gz
%WGET% http://downloads.sourceforge.net/project/mingweditline/wineditline-2.101.tar.bz2
%WGET% http://softagalleria.net/download/dirent/dirent-1.21.zip
%WGET% https://www.cryptopp.com/cryptopp563.zip
%WGET% ftp://ftp.csx.cam.ac.uk/pub/software/programming/pcre/pcre2-10.10.tar.gz
%WGET% ftp://ftp.csx.cam.ac.uk/pub/software/programming/pcre/pcre-8.38.tar.gz
%WGET% http://downloads.sourceforge.net/project/boost/boost/1.59.0/boost_1_59_0.tar.gz
%WGET% https://www.ece.uvic.ca/~frodo/jasper/software/jasper-1.900.1.zip
%WGET% ftp://ftp.remotesensing.org/pub/libtiff/tiff-4.0.6.tar.gz
%WGET% ftp://xmlsoft.org/libxml2/libxml2-2.9.3.tar.gz
%WGET% ftp://ftp.gnu.org/pub/gnu/gettext/gettext-0.19.6.tar.xz
%WGET% http://www.freedesktop.org/software/harfbuzz/release/harfbuzz-1.1.2.tar.bz2
%WGET% http://download.savannah.gnu.org/releases/freetype/freetype-2.6.2.tar.gz
%WGET% http://pkgconfig.freedesktop.org/releases/pkg-config-0.29.tar.gz
%WGET% http://downloads.sourceforge.net/project/gnuwin32/readline/5.0-1/readline-5.0-1-src.zip
%WGET% http://www.freedesktop.org/software/fontconfig/release/fontconfig-2.11.94.tar.gz
%WGET% http://tukaani.org/xz/xz-5.2.2.tar.xz
%WGET% https://www.cl.cam.ac.uk/~mgk25/jbigkit/download/jbigkit-2.1.tar.gz
%WGET% ftp://ftp.simplesystems.org/pub/libpng/png/src/libpng16/libpng-1.6.20.tar.xz
%WGET% ftp://sourceware.org/pub/libffi/libffi-3.1.tar.gz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/gstreamer/1.6/gstreamer-1.6.1.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/gstreamermm/1.4/gstreamermm-1.4.3.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/glib/2.46/glib-2.46.2.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/atk/2.18/atk-2.18.0.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/pango/1.38/pango-1.38.1.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/gtk+/3.16/gtk+-3.16.7.tar.xz
%WGET% http://cairographics.org/releases/cairo-1.14.4.tar.xz
%WGET% http://cairographics.org/releases/pixman-0.32.8.tar.gz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/gdk-pixbuf/2.32/gdk-pixbuf-2.32.2.tar.xz
%WGET% https://github.com/Nephatrine/libepoxy/archive/v1.3.1_neph-3.tar.gz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/adwaita-icon-theme/3.18/adwaita-icon-theme-3.18.0.tar.xz
%WGET% http://icon-theme.freedesktop.org/releases/hicolor-icon-theme-0.15.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/goocanvas/2.0/goocanvas-2.0.2.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/goocanvasmm/1.90/goocanvasmm-1.90.9.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/libsigc++/2.5/libsigc++-2.5.4.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/pangomm/2.38/pangomm-2.38.1.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/glibmm/2.46/glibmm-2.46.2.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/gtkmm/3.16/gtkmm-3.16.0.tar.xz
%WGET% http://ftp.acc.umu.se/pub/GNOME/sources/atkmm/2.24/atkmm-2.24.2.tar.xz
%WGET% http://cairographics.org/releases/cairomm-1.12.0.tar.gz

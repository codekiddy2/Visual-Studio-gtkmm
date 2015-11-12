```
this file is for reference only, taken out from MSYS2 environment
```

FLAGS:
	pkg-config --cflags --libs gtkmm-3.0

INSTALL ICONS:
	pacman -S mingw-w64-x86_64-icon-naming-utils  		#Maps the new names of icons for Tango to the legacy names used by the GNOME and KDE desktops
	pacman -S mingw-w64-x86_64-gnome-icon-theme-symbolic	#gnome-icon-theme
	pacman -S mingw-w64-x86_64-hicolor-icon-theme		#hicolor-icon-theme

INSTALL PANGO MODULES: (configure and "make" only modules)
	http://ftp.acc.umu.se/pub/GNOME/sources/pango/1.36/

PREPARE PANGO:

	>default dir at runtime = libdir/pango/1.8.0/modules.cache
	>Dynamically loaded modules handle text layout for particular combinations of script and font backend. Pango ships with a wide selection of modules, including modules for Hebrew, Arabic, Hangul, Thai, and a number of Indic script
	>WARNING "2 different modules tries to register"

	pango-querymodules --update-cache
    pango-querymodules > /mingw64/lib/pango/1.8.0/modules.cache

COMPILE Shemas:

	>default dir at runtime = /usr/share/glib-2.0/schemas

	glib-compile-schemas /mingw64/share/glib-2.0/schemas


PREPARE GDK-Pixbuf:

	>default dir at runtime = libdir/gdk-pixbuf-2.0/2.10.0/loaders.cache
	>At runtime, Pango looks for the loadable module information

	gdk-pixbuf-query-loaders --update-cache
	gdk-pixbuf-query-loaders > /mingw64/lib/gdk-pixbuf-2.0/2.10.0/loaders.cache

Prepare GTK+ IMModules:

	>default dir at runtime = libdir/gtk-3.0/3.0.0/immodules.cache
	>collects information about loadable input method modules for GTK+

	gtk-query-immodules-3.0 --update-cache
	gtk-query-immodules-3.0 > /mingw64/lib/gtk-3.0/3.0.0/immodules.cache

Update icon cache:

	>default dir = usr/share/icons/hicolor AND/OR usr/share/icons/gnome
	>creates mmapable cache files for icon themes

	gtk-update-icon-cache-3.0 -v /mingw64/share/icons/gnome/
	gtk-update-icon-cache-3.0 -v /mingw64/share/icons/hicolor/

Update font cache:

	>create an index of FreeType font files:
	fc-cache --verbose

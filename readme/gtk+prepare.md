```
this file is for reference only, taken out from MSYS2 environment
```

**FLAGS**

* list flags

	> pkg-config --cflags --libs gtkmm-3.0

**INSTALL ICONS**

* Maps the new names of icons for Tango to the legacy names used by the GNOME and KDE desktops
	
	>pacman -S mingw-w64-x86_64-icon-naming-utils
	
* gnome-icon-theme
	
	>pacman -S mingw-w64-x86_64-gnome-icon-theme-symbolic
	
* hicolor-icon-theme
	
	>pacman -S mingw-w64-x86_64-hicolor-icon-theme

**INSTALL PANGO MODULES** (configure and "make" only modules)

* http://ftp.acc.umu.se/pub/GNOME/sources/pango/1.36/

**PREPARE PANGO**

* NOTE: project "pango-querymodules" project does this!
* default dir at runtime = libdir/pango/1.8.0/modules.cache
* Dynamically loaded modules handle text layout for particular combinations of script and font backend. Pango ships with a wide selection of modules, including modules for Hebrew, Arabic, Hangul, Thai, and a number of Indic script
* WARNING "2 different modules tries to register"

	>pango-querymodules --update-cache
    >pango-querymodules > D:/Github/Visual-Studio-gtkmm/output/v140\Debug/x64/lib/pango/1.8.0/modules.cache

**COMPILE Shemas**

* NOTE: GTK+ -> "install" compiles schemas during install!
* default dir at runtime = share/glib-2.0/schemas

	> glib-compile-schemas D:/Github/Visual-Studio-gtkmm/output/v140\Debug/x64/share/glib-2.0/schemas


**PREPARE GDK-Pixbuf**

* NOTE: project "gdk-pixbuf-query-loaders" project does this!
* default dir at runtime = libdir/gdk-pixbuf-2.0/2.10.0/loaders.cache
* At runtime, Pango looks for the loadable module information

	> gdk-pixbuf-query-loaders --update-cache
	> gdk-pixbuf-query-loaders > D:/Github/Visual-Studio-gtkmm/output/v140\Debug/x64/lib/gdk-pixbuf-2.0/2.32.2/loaders.cache

**Prepare GTK+ IMModules**

* NOTE: project "gtk-query-immodules" project does this!
* default dir at runtime = libdir/gtk-3.0/3.0.0/immodules.cache
* collects information about loadable input method modules for GTK+

	> gtk-query-immodules-3.0 --update-cache
	> gtk-query-immodules-3.0 > D:/Github/Visual-Studio-gtkmm/output/v140\Debug/x64/lib/gtk-3.0/3.0.0/etc/immodules.cache

**Update icon cache**

* NOTE: project "gtk-update-icon-cache" project does this!
* default dir = usr/share/icons/hicolor AND/OR usr/share/icons/gnome
* creates mmapable cache files for icon themes

* create cache file:
	
	> gtk-update-icon-cache-3.0 D:\Github\Visual-Studio-gtkmm\output\v140\Debug\x64\share\icons\Adwaita\
	> gtk-update-icon-cache-3.0 D:\Github\Visual-Studio-gtkmm\output\v140\Debug\x64\share\icons\hicolor\
	
* validate cache file:
	> gtk-update-icon-cache-3.0 -v D:\Github\Visual-Studio-gtkmm\output\v140\Debug\x64\share\icons\Adwaita\
	> gtk-update-icon-cache-3.0 -v D:\Github\Visual-Studio-gtkmm\output\v140\Debug\x64\share\icons\hicolor\

**Update font cache**

* NOTE: project "fc-cache" project does this!
* create an index of FreeType font files:
	
	> fc-cache --verbose

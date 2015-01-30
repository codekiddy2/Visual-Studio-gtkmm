Here you will find Visual Studio 2013 projects for individual packages.
All of the projects share exactly the same "common settings" via common Visual Studio
properties found in /gtkmm/properties.

Benefits:
all outputs share the same CRT
all libraries/dll's share common naming converntion and extension:
   <output name>*.lib     (static library)
   <output name>*.dll.lib (import library)
   <output name>*.dll.exp (export library)
   <output name>*.dll     (shared library)

and many other naming shemas and stuf such as same warning level.

some projects override these global settings for specific needs while other import
higher level properties.

Here is list of testings (yes mean tested, no means not tested):

project|version|Debug x64|Debug x86|Release x64|Release x86
--------------------------------------------------------------------------------
zlib 	   | 1.2.8   | yes 	      | yes 		| yes	   	| yes
--------------------------------------------------------------------------------
libpng   | 1.6.16  | yes      	| yes	   	| yes		   | yes
--------------------------------------------------------------------------------
libiconv | 1.14    | yes      	| yes		   | yes 		| yes
--------------------------------------------------------------------------------
gettext  | NA      | yes      	| yes 		| yes 		| yes
--------------------------------------------------------------------------------
expat    | 2.1.0   | yes      	| yes 		| yes 		| yes
--------------------------------------------------------------------------------

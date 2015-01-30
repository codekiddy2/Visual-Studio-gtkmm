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
   
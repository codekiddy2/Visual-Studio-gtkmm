Here you will find Visual Studio 2013 projects for individual packages.
All of the projects share exactly the same "common settings" found in properties folder.

Benefits:
```
all outputs share the same CRT
all libraries/dll's share common naming converntion and extension:
   <output name>*.lib     (static library)
   <output name>*.dll.lib (import library)
   <output name>*.dll.exp (export library)
   <output name>*.dll     (shared library)
all outputs share exactly the same compiler settings
single setting modification has indirect impact on all the packages.
```

some projects override these global settings for specific needs but this is reduced to minimum.

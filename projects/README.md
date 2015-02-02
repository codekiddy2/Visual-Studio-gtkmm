Here you will find Visual Studio 2013 projects for individual packages.
All of the projects share exactly the same "common settings" via common Visual Studio
properties found in /gtkmm/properties.

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

some projects override these global settings for specific needs while other import
higher level properties.

**Here is a list of testings (yes mean test success, no means not tested but supposed to work):**

project | version | Debug x64 | Debug x86 | Release x64 | Release x86 |
:--------|:---------:|:-----------:|:-----------:|:-------------:|:-------------:|
zlib 	      | 1.2.8   | yes 	      | yes 		| yes	   	| yes
libpng      | 1.6.16  | yes      	| yes	   	| yes		   | yes
libiconv    | 1.14    | yes      	| yes		   | yes 		| yes
gettext     | NA      | yes      	| yes 		| yes 		| yes
expat       | 2.1.0   | yes      	| yes 		| no 		   | no
freeglut    | 3.0.0   | yes         | no        | yes       | no
jasper      | 1.900.1 | yes         | yes       | yes       | yes
libffi      | 3.1     | yes         | no        | no        | no
jpeg-turbo  | 1.4.0   | yes         | yes       | no        | no
libtiff     | 4.0.2   | yes         | no        | no        | no
pcre2       | 10.00   | yes         | no        | no        | no
libepoxy    | 1.2     | yes         | no        | no        | no
pixman      | 0.32.6  | yes         | no        | yes       | no
freetype    | 2.5.5   | yes         | yes       | yes       | yes

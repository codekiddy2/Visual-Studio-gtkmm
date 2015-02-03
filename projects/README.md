Here you will find Visual Studio 2013 projects for individual packages.
All of the projects share exactly the same "common settings" via common Visual Studio
properties found in properties folder.

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

Here is a list of available projects, testings, sources origin and tools used to build:
(yes mean test success, no means not tested but supposed to work)

project | version | Debug x64 | Debug x86 | Release x64 | Release x86 | Sources | Build
:--------|:---------:|:-----------:|:-----------:|:-------------:|:-------------:|:-------------:|:-------------:|
zlib 	      | 1.2.8   | yes 	      | yes 		| yes	   	| yes     |  official   | msvc
libpng      | 1.6.16  | yes      	| yes	   	| yes		   | yes     |  official   | msvc
libiconv    | 1.14    | yes      	| yes		   | yes 		| yes     |  official   | msvc
gettext     | 0.19.4  | yes      	| no  		| yes 		| no      |  official   | autoconf + msvc
expat       | 2.1.0   | yes      	| yes 		| no 		   | no      |  official   | msvc
freeglut    | 3.0.0   | yes         | no        | yes       | no      |  official   | cmake + msvc
jasper      | 1.900.1 | yes         | yes       | yes       | yes     |  official   | msvc
libffi      | 3.1     | yes         | no        | no        | no      |  official   | mozilla + autoconf 
jpeg-turbo  | 1.4.0   | yes         | yes       | no        | no      |  official   | cmake + msvc
libtiff     | 4.0.2   | yes         | no        | no        | no      |  official   | msvc
pcre2       | 10.00   | yes         | no        | no        | no      |  official   | cmake + msvc
libepoxy    | 1.2     | yes         | no        | no        | no      |  official   | python + nmake
pixman      | 0.32.6  | yes         | no        | yes       | no      |  official   | msvc
freetype    | 2.5.5   | yes         | yes       | yes       | yes     |  official   | msvc

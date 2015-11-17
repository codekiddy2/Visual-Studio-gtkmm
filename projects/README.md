```
PROJECTS DIRECTORY
```
Here you will find Visual Studio 2015 projects and solutions for individual packages.
Each package has it's version number indicating for which version these projects will work.
Projects and solutions are placed into folder named "msvc-140".

All of the projects depend on Visual Studio properties which are placed into ../properties folder.
This is so that all projects share exactly the same settings and have common place of storage.
See wiki -> properties for more information.

Some projects override these global settings for specific needs but this is reduced to minimum.
These projects will fail to load if properties folder containing properties
is not placed next to projects folder.

Therefore the only possible way to make things work is to clone entry repository and place it into:
**D:/Github/Visual-Studio-gtkmm**

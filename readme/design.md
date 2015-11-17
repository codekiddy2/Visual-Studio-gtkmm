```
Design rules
```

>DIRECTORES

* Root directory = D:/GitHub/Visual-Studio-gtkmm/
* Projects directory = D:/GitHub/Visual-Studio-gtkmm/projects/
* Properties directory = D:/GitHub/Visual-Studio-gtkmm/properties/
* Readme directory = D:/GitHub/Visual-Studio-gtkmm/readme/
* Solution directory = D:/GitHub/Visual-Studio-gtkmm/projects/"package name"/msvc-140/
* Project directory = D:/GitHub/Visual-Studio-gtkmm/projects/"package name"/msvc-140/"Project name"/
* Test project directory = D:/GitHub/Visual-Studio-gtkmm/projects/"package name"/msvc-140/test/"project name"/
* Project readme directory = D:/GitHub/Visual-Studio-gtkmm/projects/"package name"/msvc-140/"Project name"/readme/

>PROPERTIES

* All properties inherit other properties according to hierarchy.
* All projects within solution have common solution level property page whose settings apply to all projects.
* Project level settings can be changed/overriden only if solution level setting are bad for that project.


>PROJECT FILES

* Solution/project is not finished if it does not pass successful build of all configurations.
* Each solution contains an "install project" to install both headers and documentation.
* Each solution contains a readme filter with readme files with following entries in order:
	* COPYRIGHT
	* INFO
	* DEPENDENCIES
	* INSTRUCTIONS
	* NOTES
	* TESTINGS
	* TODO
* Readme files withing solution are edited for each package version separately.
* source files should be sorted by using project filters: Header Files, Source Files, Module Files and Resource Files...
* project configurations should be named like so:
	* dll configuration: Debug dll | Release dll
	* lib configuration: Debug static | Release static
	* discrepancy only for specific needs.
* Virtual names (folders and files) within solution should be the same as the names of real files and folders.

>OUTPUT FILES

* following naming convention:
	* output name*.lib     (static library)
	* output name*.dll.lib (import library)
	* output name*.dll.exp (export library)
	* output name*.dll     (shared library)

>SOLUTION

* Solution should be set to start one of the test projects on debug
* Opening a solution should not result in errors or warnings.
**System PATH settings**

PATH setup is done in:
* Control Panel\All Control Panel Items\System > Advanced system settings> advanced > Environment variables > System variables > Path

>Here is what needs to be added to path:

	D:\Github\install\nasm;
	D:\Github\install\BoostBuild;
	D:\Github\install\CMake\bin;
	D:\Github\install\Python3;
	D:\Github\install\Python3\Scripts;
	D:\Github\install\Perl64\bin;
	
Depending on your build type append only one of the following
directories to your path:

For Debug x64:

	D:\GitHub\Visual-Studio-gtkmm\output\v140\Debug\x64\bin;
	
For Release x64:

	D:\GitHub\Visual-Studio-gtkmm\output\v140\Release\x64\bin;
	
For Debug x86:

	D:\GitHub\Visual-Studio-gtkmm\output\v140\Debug\Win32\bin;
	
For Release x86:

	D:\GitHub\Visual-Studio-gtkmm\output\v140\Release\Win32\bin;


Add PKG_CONFIG_PATH to system variables and set value to (modify path as needed):
	
	D:\GitHub\Visual-Studio-gtkmm\output\v140\Release\x64\share\pkgconfig
	
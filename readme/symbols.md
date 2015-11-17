```
Visual Studio Symbols settings
```
Download Symbols for your Windows x64 / x86:
	https://msdn.microsoft.com/en-us/windows/hardware/gg463028.aspx

Install both x64 and x86 symbols into:
	D:\Github\Install\Symbols

```
Symbol locations
```
Under Visual Studio > Tools > Options > Debugging > Symbols set these paths:
	Microsoft Symbol Servers:
	D:\Github\Visual-Studio-gtkmm\output\v140\Debug\x64\symbols
	D:\Github\Visual-Studio-gtkmm\output\v140\Release\x64\symbols
	D:\Github\Visual-Studio-gtkmm\output\v140\Debug\Win32\symbols
	D:\Github\Visual-Studio-gtkmm\output\v140\Release\Win32\symbols
	D:\Github\Install\Symbols

```
Symbols Cache Directory
```
Set symbols cache directory to:
	D:\Github\Install\Symbols
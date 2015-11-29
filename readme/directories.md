**Directory structure**

>Working directory tree

	D:\
		D:\Github
			D:\Github\Install
				BoostBuild
				CMake
				mozilla-build
				msys64
				nasm
				Python27
				Python35
				SDK
				Symbols
				VisualStudio
				VSCode
			D:\Github\Packages
				Compressed
				Extracted
			D:\Github\Visual-Studio-gtkmm
				output
					v140
						Debug
							Win32
								...
							x64
								bin
									test
										...
									tools
										...
								etc
								include
									"package name"
								intermediate
									solution 1
										project 1
										project 2 ...
									solution 2 ...
								lib
									"project name"
									test
									tools
								share
									...
								symbols
									...
						Release
							Win32
								...
							x64
								...
				projects
					"package_name-version" ...
				properties
				readme
					images
			
			
>Solution directory tree

	Solution
		install		( install project )
		src			( modified sources )
		def			( definition files )
		test		( test projects )
			test 1
			test 2
			test 3
		readme		( readme files )
		project 1
		project 2
		project 3 ...
		
**Directory structure**

>Working directory tree

	D:\
		D:\Github
			D:\Github\Install
				BoostBuild
				CMake
				mozilla-build
				msys64 or msys32
				nasm
				Perl64 or Perl
				Python27
					x64
					x86
				Python35
					x64
					x86
				SDK
				Symbols
				VisualStudio
				VSCode
			D:\Github\Packages
				Compressed
				Extracted
			D:\Github\Visual-Studio-gtkmm
				config
				output
				projects
					"package_name-version"
						msvc-140
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

	
>Output directory tree

		v120
			Debug ...
			Release ...
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
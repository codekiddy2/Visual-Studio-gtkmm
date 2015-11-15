/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

#include <direct.h>
#ifndef _S_IFDIR
#define	_S_IFDIR	0x4000
#endif
#ifndef S_IFDIR
#define	S_IFDIR _S_IFDIR
#endif
#ifndef _S_IFMT
#define	_S_IFMT		0xF000
#endif
#ifndef S_IFMT
#define	S_IFMT _S_IFMT
#endif

#ifndef S_ISDIR
#   ifdef S_IFDIR
#       define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#   else
#       define S_ISDIR(m) 0
#   endif
#endif /* !S_ISDIR */
#define S_ISREG(m)      (((m)&S_IFMT) == _S_IFREG)
#ifndef F_OK
#    define F_OK 0x00
#endif
#ifndef X_OK
#    define X_OK 0x01
#endif
#ifndef W_OK
#    define W_OK 0x02
#endif

typedef int mode_t;

//codekiddy uncomment since msvc-140
//#define snprintf _snprintf

/* Font configuration directory */
#define CONFDIR "D:/GitHub/Visual-Studio-gtkmm/output/Debug/x64/share/fontconfig/conf"

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* The normal alignment of `double', in bytes. */
#define ALIGNOF_DOUBLE 8

/* Use libxml2 instead of Expat */
/* #undef ENABLE_LIBXML2 */

/* Additional font directories */
// #define FC_ADD_FONTS "yes"

/* Architecture prefix to use for cache file names */
#undef FC_ARCHITECTURE

/* System font directory */
#define FC_DEFAULT_FONTS "C:/Windows/Fonts"

#define FC_CACHEDIR "D:/GitHub/Visual-Studio-gtkmm/output/Debug/x64/share/fontconfig/cache"

/* Define to 1 if you have the `chsize' function. */
#define HAVE_CHSIZE 1

/* Define to nothing if C supports flexible array members, and to 1 if it does
   not. That way, with a declaration like `struct s { int n; double
   d[FLEXIBLE_ARRAY_MEMBER]; };', the struct hack can be used with pre-C99
   compilers. When computing the size of such an object, don't use 'sizeof
   (struct s)' as it overestimates the size. Use 'offsetof (struct s, d)'
   instead. Don't use 'offsetof (struct s, d[0])', as this doesn't work with
   MSVC and with C++ compilers. */
#define FLEXIBLE_ARRAY_MEMBER 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Found a useable expat library */
#define HAVE_EXPAT 1

/* Define to 1 if you have the `fstatfs' function. */
#undef HAVE_FSTATFS

/* Define to 1 if you have the `fstatvfs' function. */
#undef HAVE_FSTATVFS

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `ftruncate' function. */
/*#define HAVE_FTRUNCATE 1*/

/* FT_Bitmap_Size structure includes y_ppem field */
#define HAVE_FT_BITMAP_SIZE_Y_PPEM 1

/* Define to 1 if you have the `FT_Get_BDF_Property' function. */
#define HAVE_FT_GET_BDF_PROPERTY 1

/* Define to 1 if you have the `FT_Get_Next_Char' function. */
#define HAVE_FT_GET_NEXT_CHAR 1

/* Define to 1 if you have the `FT_Get_PS_Font_Info' function. */
#define HAVE_FT_GET_PS_FONT_INFO 1

/* Define to 1 if you have the `FT_Get_X11_Font_Format' function. */
#define HAVE_FT_GET_X11_FONT_FORMAT 1

/* Define to 1 if you have the `FT_Has_PS_Glyph_Names' function. */
#define HAVE_FT_HAS_PS_GLYPH_NAMES 1

/* Define to 1 if you have the `FT_Select_Size' function. */
#define HAVE_FT_SELECT_SIZE 1

/* Define to 1 if you have the `getexecname' function. */
#undef HAVE_GETEXECNAME

/* Define to 1 if you have the `geteuid' function. */
/* #undef HAVE_GETEUID */

/* Define to 1 if you have the `getopt' function. */
/*#define HAVE_GETOPT 1*/

/* Define to 1 if you have the `getopt_long' function. */
/*#define HAVE_GETOPT_LONG 1*/

/* Define to 1 if you have the `getpagesize' function. */
/*#define HAVE_GETPAGESIZE 1*/

/* Define to 1 if you have the `getprogname' function. */
#undef HAVE_GETPROGNAME

/* Have Intel __sync_* atomic primitives */
#undef HAVE_INTEL_ATOMIC_PRIMITIVES

/* Define to 1 if you have the `getuid' function. */
/* #undef HAVE_GETUID */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `link' function. */
/* #undef HAVE_LINK */

/* Define to 1 if you have the `lrand48' function. */
/* #undef HAVE_LRAND48 */

/* Define to 1 if you have the `lstat' function. */
#undef HAVE_LSTAT

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkostemp' function. */
#undef HAVE_MKOSTEMP

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `mkstemp' function. */
/* #undef HAVE_MKSTEMP */

/* Define to 1 if you have a working `mmap' system call. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the 'posix_fadvise' function. */
#undef HAVE_POSIX_FADVISE

/* Have POSIX threads */
#undef HAVE_PTHREAD

/* Have PTHREAD_PRIO_INHERIT. */
#undef HAVE_PTHREAD_PRIO_INHERIT

/* Define to 1 if you have the `rand' function. */
#define HAVE_RAND 1

/* Define to 1 if you have the `random' function. */
#undef HAVE_RANDOM

/* Define to 1 if you have the `random_r' function. */
#undef HAVE_RANDOM_R

/* Define to 1 if you have the `rand_r' function. */
#undef HAVE_RAND_R

/* Define to 1 if you have the `regcomp' function. */
#undef HAVE_REGCOMP

/* Define to 1 if you have the `regerror' function. */
#undef HAVE_REGERROR

/* Define to 1 if you have the `regexec' function. */
#undef HAVE_REGEXEC

/* Define to 1 if you have the <regex.h> header file. */
#undef HAVE_REGEX_H

/* Define to 1 if you have the `regfree' function. */
#undef HAVE_REGFREE

/* Define to 1 if you have the 'scandir' function. */
#undef HAVE_SCANDIR

/* Define to 1 if you have the 'scandir' function with int (* compar)(const
   void *, const void *) */
#undef HAVE_SCANDIR_VOID_P

/* Define to 1 if you have the <sched.h> header file. */
#undef HAVE_SCHED_H

/* Have sched_yield */
#undef HAVE_SCHED_YIELD

/* Have Solaris __machine_*_barrier and atomic_* operations */
#undef HAVE_SOLARIS_ATOMIC_OPS

/* Define to 1 if you have the `random' function. */
/* #undef HAVE_RANDOM */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the <strings.h> header file. */
/*#define HAVE_STRINGS_H 1*/

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strrchr' function. */
#define HAVE_STRRCHR 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if `d_type' is a member of `struct dirent'. */
#undef HAVE_STRUCT_DIRENT_D_TYPE

/* Define to 1 if `f_flags' is a member of `struct statfs'. */
#undef HAVE_STRUCT_STATFS_F_FLAGS

/* Define to 1 if `f_fstypename' is a member of `struct statfs'. */
#undef HAVE_STRUCT_STATFS_F_FSTYPENAME

/* Define to 1 if `f_basetype' is a member of `struct statvfs'. */
#undef HAVE_STRUCT_STATVFS_F_BASETYPE

/* Define to 1 if `f_fstypename' is a member of `struct statvfs'. */
#undef HAVE_STRUCT_STATVFS_F_FSTYPENAME

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#undef HAVE_SYS_MOUNT_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#undef HAVE_SYS_PARAM_H

/* Define to 1 if you have the <sys/statfs.h> header file. */
#undef HAVE_SYS_STATFS_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
#undef HAVE_SYS_VFS_H

/* Define to 1 if you have the <unistd.h> header file. */
/*#define HAVE_UNISTD_H 1*/

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Can use #warning in C files */
#define HAVE_WARNING_CPP_DIRECTIVE 1

/* Use xmlparse.h instead of expat.h */
/* #undef HAVE_XMLPARSE_H */

/* Define to 1 if you have the `XML_SetDoctypeDeclHandler' function. */
#define HAVE_XML_SETDOCTYPEDECLHANDLER 1

/* Define to 1 if you have the `_mktemp_s' function. */
#undef HAVE__MKTEMP_S

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
// #define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "fontconfig"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
#undef PTHREAD_CREATE_JOINABLE

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `void*', as computed by sizeof. */
#define SIZEOF_VOIDP 4

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Use iconv. */
/*#define USE_ICONV 1*/

/* Use regex */
#undef USE_REGEX

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# undef _GNU_SOURCE
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# undef _POSIX_PTHREAD_SEMANTICS
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# undef _TANDEM_SOURCE
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# undef __EXTENSIONS__
#endif


/* Version number of package */
#define VERSION "2.11.92"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#undef _FILE_OFFSET_BITS

/* Define for large files, on AIX-style hosts. */
#undef _LARGE_FILES

/* Define to 1 if on MINIX. */
#undef _MINIX

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
#undef _POSIX_1_SOURCE

/* Define to 1 if you need to in order for `stat' and other things to work. */
#undef _POSIX_SOURCE

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#define inline __inline
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

#include "config-fixups.h"

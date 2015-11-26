
#ifndef edit_EXPORT_H
#define edit_EXPORT_H

#ifdef edit_BUILT_AS_STATIC
#  define edit_EXPORT
#  define EDIT_NO_EXPORT
#else
#  ifndef edit_EXPORT
#    ifdef edit_EXPORTS
        /* We are building this library */
#      define edit_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define edit_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef EDIT_NO_EXPORT
#    define EDIT_NO_EXPORT 
#  endif
#endif

#ifndef EDIT_DEPRECATED
#  define EDIT_DEPRECATED __declspec(deprecated)
#endif

#ifndef EDIT_DEPRECATED_EXPORT
#  define EDIT_DEPRECATED_EXPORT edit_EXPORT EDIT_DEPRECATED
#endif

#ifndef EDIT_DEPRECATED_NO_EXPORT
#  define EDIT_DEPRECATED_NO_EXPORT EDIT_NO_EXPORT EDIT_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define EDIT_NO_DEPRECATED
#endif

#endif

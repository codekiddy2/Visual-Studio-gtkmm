#define VERSION "1.5.0"
#define BUILD "20160619"
#define PACKAGE_NAME "libjpeg-turbo"

#ifndef INLINE
#if defined(__GNUC__)
#define INLINE inline __attribute__((always_inline))
#elif defined(_MSC_VER)
#define INLINE __forceinline
#else
#define INLINE
#endif
#endif


#define WIN32_LEAN_AND_MEAN
#include <windows.h>

// If we are on MSVC, disable some stupid MSVC warnings
#ifdef _MSC_VER
# pragma warning (disable:4100)
#endif

#define R_OK 4
#define F_OK 0

/* Define if you want to deallocate objects. */
#define USE_DEALLOC 1

/* Define if you want to map exceptions. */
#define USE_MAPPED_EXCEPTIONS 1

/* Version number of package */
#define VERSION "0.9.0"


#ifndef iec61850_shared_EXPORT_H
#define iec61850_shared_EXPORT_H

#ifdef iec61850_shared_BUILT_AS_STATIC
#  define iec61850_shared_EXPORT
#  define IEC61850_SHARED_NO_EXPORT
#else
#  ifndef iec61850_shared_EXPORT
#    ifdef iec61850_shared_EXPORTS
        /* We are building this library */
#      define iec61850_shared_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define iec61850_shared_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef IEC61850_SHARED_NO_EXPORT
#    define IEC61850_SHARED_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef IEC61850_SHARED_DEPRECATED
#  define IEC61850_SHARED_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef IEC61850_SHARED_DEPRECATED_EXPORT
#  define IEC61850_SHARED_DEPRECATED_EXPORT iec61850_shared_EXPORT IEC61850_SHARED_DEPRECATED
#endif

#ifndef IEC61850_SHARED_DEPRECATED_NO_EXPORT
#  define IEC61850_SHARED_DEPRECATED_NO_EXPORT IEC61850_SHARED_NO_EXPORT IEC61850_SHARED_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef IEC61850_SHARED_NO_DEPRECATED
#    define IEC61850_SHARED_NO_DEPRECATED
#  endif
#endif

#endif /* iec61850_shared_EXPORT_H */

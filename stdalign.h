#ifndef __FSTD_HDRS_STDALIGN_H
#define __FSTD_HDRS_STDALIGN_H 1

#ifndef __cplusplus
#  undef alignas
#  define alignas _Alignas
#  undef alignof
#  define alignof _Alignof

#  undef __alignof_is_defined
#  define __alignof_is_defined 1
#  undef __alignas_is_defined
#  define __alignas_is_defined 1
#endif

#endif

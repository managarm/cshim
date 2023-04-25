#if !defined(__FSTD_HDRS_STDBOOL_H) || defined(__FSTD_HDRS_CXX_WRAP)
#if !defined(__FSTD_HDRS_CXX_WRAP)
#define __FSTD_HDRS_STDBOOL_H 1
#endif

#ifndef __FSTD_HDRS_STDBOOL_H_MACROS
#define __FSTD_HDRS_STDBOOL_H_MACROS 1

#ifndef __cplusplus
#  undef bool
#  define bool _Bool

#  undef true
#  define true 1
#  undef false
#  define false 0
#endif

#undef __bool_true_false_are_defined
#define __bool_true_false_are_defined 1

#endif

#endif

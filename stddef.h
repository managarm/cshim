#if !defined(_STDDEF_H) || defined(__LIBC_CXX_WRAP)
#if !defined(__LIBC_CXX_WRAP)
#define _STDDEF_H 1
#endif

typedef __SIZE_TYPE__ size_t;
typedef __PTRDIFF_TYPE__ ptrdiff_t;

#ifndef __cplusplus
typedef __WCHAR_TYPE__ wchar_t;

/* XXX fix to use proper __STDC_VERSION__ number later on */
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 202000L)
typedef typeof(nullptr) nullptr_t;
#endif

#endif

#ifdef __cplusplus
typedef decltype(nullptr) nullptr_t;
#endif

#ifndef __STDDEF_H_MACROS
#define __STDDEF_H_MACROS 1

#ifdef NULL
#undef NULL
#endif

#ifndef __cplusplus
#  define NULL ((void *)0)
#else
#  define NULL 0
#endif

#define offsetof(s, m) __builtin_offsetof(s, m)

/* XXX fix to use proper __STDC_VERSION__ number later on */
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 202000L)
#  define unreachable() __builtin_unreachable()
#endif

#endif

#endif

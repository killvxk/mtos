#pragma once

#ifndef _STDINT_H
#define _STDINT_H

/* stdint.h - C99 standard header */

/* exact-width integer types */
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t, __uint32_t;
typedef unsigned long long uint64_t;

/* minimum-width integer types */
typedef signed char int_least8_t;
typedef signed short int_least16_t;
typedef signed int int_least32_t;
typedef signed long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;

/* fastest minimum-width integer types */
typedef signed int int_fast8_t;
typedef signed int int_fast16_t;
typedef signed int int_fast32_t;
typedef signed long long int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;

/* integer types capable of holding object pointers */
#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#if __POCC_TARGET__ == 3
typedef signed long long intptr_t;
#else
typedef signed int intptr_t;
#endif
#endif /* _INTPTR_T_DEFINED */

#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#if __POCC_TARGET__ == 3
typedef unsigned long long uintptr_t;
#else
typedef unsigned int uintptr_t;
#endif
#endif /* _UINTPTR_T_DEFINED */

/* greatest-width integer types */
typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;

/* limits of exact-width integer types */
#define INT8_MIN    (-INT8_MAX - 1)
#define INT16_MIN   (-INT16_MAX - 1)
#define INT32_MIN   (-INT32_MAX - 1)
#define INT64_MIN   (-INT64_MAX - 1)

#define INT8_MAX    0x7f
#define INT16_MAX   0x7fff
#define INT32_MAX   0x7fffffff
#define INT64_MAX   0x7fffffffffffffff

#define UINT8_MAX   0xff
#define UINT16_MAX  0xffff
#define UINT32_MAX  0xffffffff
#define UINT64_MAX  0xffffffffffffffff

/* limits of minimum-width integer types */
#define INT_LEAST8_MIN    (-INT_LEAST8_MAX - 1)
#define INT_LEAST16_MIN   (-INT_LEAST16_MAX - 1)
#define INT_LEAST32_MIN   (-INT_LEAST32_MAX - 1)
#define INT_LEAST64_MIN   (-INT_LEAST64_MAX - 1)

#define INT_LEAST8_MAX    0x7f
#define INT_LEAST16_MAX   0x7fff
#define INT_LEAST32_MAX   0x7fffffff
#define INT_LEAST64_MAX   0x7fffffffffffffff

#define UINT_LEAST8_MAX   0xff
#define UINT_LEAST16_MAX  0xffff
#define UINT_LEAST32_MAX  0xffffffff
#define UINT_LEAST64_MAX  0xffffffffffffffff

/* limits of fastest minimum-width integer types */
#define INT_FAST8_MIN    (-INT_FAST8_MAX - 1)
#define INT_FAST16_MIN   (-INT_FAST16_MAX - 1)
#define INT_FAST32_MIN   (-INT_FAST32_MAX - 1)
#define INT_FAST64_MIN   (-INT_FAST64_MAX - 1)

#define INT_FAST8_MAX    0x7fffffff
#define INT_FAST16_MAX   0x7fffffff
#define INT_FAST32_MAX   0x7fffffff
#define INT_FAST64_MAX   0x7fffffffffffffff

#define UINT_FAST8_MAX   0xffffffff
#define UINT_FAST16_MAX  0xffffffff
#define UINT_FAST32_MAX  0xffffffff
#define UINT_FAST64_MAX  0xffffffffffffffff

/* limits of integer types capable of holding object pointers */
#if __POCC_TARGET__ == 3
#define INTPTR_MIN   (-INTPTR_MAX - 1)
#define INTPTR_MAX   0x7fffffffffffffff
#define UINTPTR_MAX  0xffffffffffffffff
#else
#define INTPTR_MIN   (-INTPTR_MAX - 1)
#define INTPTR_MAX   0x7fffffff
#define UINTPTR_MAX  0xffffffff
#endif

/* limits of greatest-width integer types */
#define INTMAX_MIN   (-INTMAX_MAX - 1)
#define INTMAX_MAX   0x7fffffffffffffff
#define UINTMAX_MAX  0xffffffffffffffff

/* limits of ptrdiff_t */
#if __POCC_TARGET__ == 3
#define PTRDIFF_MIN  INT64_MIN
#define PTRDIFF_MAX  INT64_MAX
#else
#define PTRDIFF_MIN  INT32_MIN
#define PTRDIFF_MAX  INT32_MAX
#endif

/* limits of sig_atomic_t */
#define SIG_ATOMIC_MIN  INT32_MIN
#define SIG_ATOMIC_MAX  INT32_MAX

/* limit of size_t */
#if __POCC_TARGET__ == 3
#define SIZE_MAX  UINT64_MAX
#else
#define SIZE_MAX  UINT32_MAX
#endif

/* limits of wchar_t */
#define WCHAR_MIN  0
#define WCHAR_MAX  0xffff

/* limits of wint_t */
#define WINT_MIN  0
#define WINT_MAX  0xffff

/* macros for minimum-width integer constants */
#define INT8_C(x)   (x)
#define INT16_C(x)  (x)
#define INT32_C(x)  (x)
#define INT64_C(x)  (x ## LL)

#define UINT8_C(x)   (x)
#define UINT16_C(x)  (x)
#define UINT32_C(x)  (x ## U)
#define UINT64_C(x)  (x ## ULL)

/* macros for greatest-width integer constants */
#define INTMAX_C(x)   INT64_C(x)
#define UINTMAX_C(x)  UINT64_C(x)

/* bounds-checking interfaces (TR24731-1, C11 annex K) */
#if __STDC_WANT_LIB_EXT1__

#if __POCC_TARGET__ == 3
#define RSIZE_MAX  INT64_MAX
#else
#define RSIZE_MAX  INT32_MAX
#endif

#endif /* __STDC_WANT_LIB_EXT1__ */

#endif /* _STDINT_H */

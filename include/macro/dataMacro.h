#include <float.h>
#include <limits.h>

#define PLSFP32
#define INT_NORMAL

#define PLS_CHAR_BIT 8

#define PLS_CHAR_MIN (-128)
#define PLS_CHAR_MAX 127
#define PLS_UCHAR_MAX 0xff

#ifdef INT_NORMAL
#define PLS_LABEL_BIT 32
typedef unsigned int label;
typedef int signedLabel;
#define PLS_MAX_ULABEL UINT_MAX
#define PLS_MAX_LABEL INT_MAX
#define PLS_MIN_LABEL INT_MIN
#endif

#ifdef INT_LONG
#define PLS_LABEL_BIT 64
#ifndef COMPILE_32
typedef unsigned long label;
typedef long signedLabel;
#else
#define PLS_LABEL_BIT 64
typedef unsigned long long label;
typedef long long signedLabel;
#endif
#define PLS_MAX_ULABEL ULLONG_MAX
#define PLS_MAX_LABEL LLONG_MAX
#define PLS_MIN_LABEL LLONG_MIN
#endif

#ifdef PLSFP32
#define PLS_REAL_BIT 32
typedef float real;
#define PLS_SMALL FLT_MIN
#define PLS_LARGE FLT_MAX
#endif

#ifdef PLSFP64
#define PLS_REAL_BIT 64
typedef double real
#define PLS_SMALL DBL_MIN
#define PLS_LARGE DBL_MAX
#endif



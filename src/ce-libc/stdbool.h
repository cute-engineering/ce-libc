#pragma once

#include "_prelude.h"

STDC_BEGIN_HEADER

#if __STDC_VERSION__ < 201700L && !defined(__cplusplus)

typedef _Bool bool;

#    define true  ((bool)1)
#    define false ((bool)0)

#endif

STDC_END_HEADER

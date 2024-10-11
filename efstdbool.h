#ifndef _EFNLIBC_EFSTDBOOL_H
#define _EFNLIBC_EFSTDBOOL_H

#ifndef __STDC_VERSION__
#define bool unsigned char
#define true 0x01
#define false 0x00
#define __bool_true_false_are_defined 0x01
#else
#include <stdbool.h>
#endif

#endif

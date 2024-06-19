#ifndef EFSTDBOOL_H
#define EFSTDBOOL_H

#ifndef __STDC_VERSION__
#define _Bool unsigned char
#endif

#define efbool _Bool
#define eftrue 0x01
#define effalse 0x00
#define __efbool_eftrue_effalse_are_defined 0x01

#endif


#ifndef LIB1_DEFINE
#define LIB1_DEFINE

#ifdef NATIVE
#include <stdint.h>
#endif

#ifdef SOMETHINGUNDEFINED
#include "Arduino.h"
#endif

typedef struct my_struct {
    int32_t value;
} my_struct;

#endif
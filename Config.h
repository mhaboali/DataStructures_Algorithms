
#include <stdio.h>
#include <stdlib.h>

#define STACK

#define LINKED
//#define ARRAY

#ifdef ARRAY
    #ifdef STACK
        #include "stack_array.h"
        #include "stack_array.c"
    #endif // STACK
#endif // ARRAY

#ifdef LINKED
    #ifdef STACK
        #include"stack_linked.h"
        #include"stack_linked.c"
    #endif // STACK

#endif
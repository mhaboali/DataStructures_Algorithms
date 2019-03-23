
#include <stdio.h>
#include <stdlib.h>

//#define STACK
#define QUEUE


#define LINKED
//#define ARRAY

#ifdef ARRAY
    #ifdef STACK
        #include "stack_array.h"
        #include "stack_array.c"
    #endif // STACK
    #ifdef QUEUE
        #include"queue_array.h"
        #include"queue_array.c"
    #endif // QUEUE
#endif // ARRAY

#ifdef LINKED
    #ifdef STACK
        #include"stack_linked.h"
        #include"stack_linked.c"
    #endif // STACK
    #ifdef QUEUE
        #include"queue_linked.h"
        #include"queue_linked.c"
    #endif // QUEUE

#endif

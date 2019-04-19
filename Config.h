
#include <stdio.h>
#include <stdlib.h>

//#define STACK
//#define QUEUE
//#define LIST
#define BST

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
    #ifdef LIST
        #include"list_array.h"
        #include"list_array.c"
    #endif // LIST

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
    #ifdef LIST
        #include"list_linked.h"
        #include"list_linked.c"
    #endif // LIST
    #ifdef BST
        #include "Binary_Tree.h"
        //#include "Binary_Tree.c"
    #endif // BST

#endif

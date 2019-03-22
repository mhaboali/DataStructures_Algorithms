#include"stack_array.h"


static void InitStack(Stack *ps){
    ps->top = 0;
}
static void push(int e, Stack *ps){
    ps->entry[ps->top++] = e;
}
static short is_stackFull(Stack *ps){
    return ps->top == MAX_SIZE;
}
static void pop(int *pe, Stack *ps){
    *pe = ps->entry[--ps->top];
}
static void stackTop(int* pe, Stack *ps){
    *pe = ps->entry[ps->top-1];
}
static void clearStack(Stack *ps){
    ps->top = 0;
}
static void traverseStack(Stack *ps, void (*pf)(int *pe)){
    int i = ps->top;
    for (i;i>0;i--)
        (*pf)(ps->entry[i-1]);
}


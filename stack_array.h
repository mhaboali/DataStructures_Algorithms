#ifndef STACK_ARRAY_H_
#define STACK_ARRAY_H_

#define MAX_SIZE    100

typedef struct stack{
    int top;
    int entry[MAX_SIZE];

}Stack;

static void InitStack(Stack *ps);
static void push(int e, Stack *ps);
static short is_stackFull(Stack *ps);
static void pop(int *pe, Stack *ps);
static void stackTop(int* pe, Stack *ps);
static void clearStack(Stack *ps);
static void traverseStack(Stack *ps, void (*pf)(int *pe));

#endif

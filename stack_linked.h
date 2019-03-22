
#ifndef STACK_LINKED_H_
#define STACK_LINKED_H_

typedef struct node{
    int entry;
    struct node *next;
}Node;

typedef struct stack{
    Node *top;
    int Size;
}Stack;

static void InitStack(Stack *ps);
static void push(int e, Stack *ps);
static short is_stackFull(Stack *ps);
static void pop(int *pe, Stack *ps);
static void stackTop(int* pe, Stack *ps);
static void clearStack(Stack *ps);
static void traverseStack(Stack *ps, void (*pf)(int *pe));

#endif

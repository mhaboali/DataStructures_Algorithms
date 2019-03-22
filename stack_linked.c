#include "stack_linked.h"
#include <stddef.h>

static void InitStack(Stack *ps){
    ps -> top = NULL;
    ps -> top = 0;
}
static void push(int e, Stack *ps){
    Node *pe = malloc(sizeof(Node));
    pe -> entry = e;
    //printf("Top1 is: %d\n",ps->top);
    pe -> next = ps -> top;
    ps -> top = pe;
    //printf("Top1 is: %d\n",ps->top);
    ps -> Size++;
}
static short is_stackFull(Stack *ps){
    return 0;
}
static short is_stackEmpty(Stack *ps){
    return ps -> top == NULL;
}
static void pop(int *pe, Stack *ps){
    *pe = ps -> top -> entry;
    Node *pn;
    pn = ps -> top;
    ps -> top = ps -> top -> next;
    free(pn);
    ps->Size--;
}
static void stackTop(int* pe, Stack *ps){
    *pe = ps -> top -> entry;
}
static void clearStack(Stack *ps){
    Node *pn;
    pn = ps -> top;
    while(pn){
        pn = pn -> next;
        free(ps->top);
        ps->top = pn;
    }
}
static void traverseStack(Stack *ps, void (*pf)(int *pe)){
    Node *pn = ps->top;
    while(pn){
        (*pf)(pn->entry);
        pn = pn->next;
    }
}

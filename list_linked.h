
#ifndef LIST_LINKED_H_
#define LIST_LINKED_H_
#include <stddef.h>

typedef struct node{
    int entry;
    struct node *next;
    struct node *prev;
}Node;
typedef struct list{
    int Size;
    int currentPos;
    Node *current;
    Node *head;
}List;

static void InitList(List *pl);
static void InsertList(int pos, int e, List *pl);
static short is_listFull(List *pl);
static void retrieve(int pos, int *pe, List *pl);
static void deleteList(int pos, int *pe, List *pl);
static void clearList(List *pl);
static void sizeList(List *pl);
static void traverseList(List *pl, void (*pf)(int *pe));

#endif



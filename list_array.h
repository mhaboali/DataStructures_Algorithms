
#ifndef LIST_ARRAY_H_
#define LIST_ARRAY_H_

#define MAX_SIZE    100

typedef struct list{
    int Size;
    int entry[MAX_SIZE];
}List;

static void InitList(List *pl);
static void InsertList(int pos, int e, List *pl);
static short is_listFull(List *pl);
static void retrieve(int pos, int *pe, List *pl);
static void deleteList(int pos, int *pe, List *pl);
static void clearList(List *pl);
static void traverseList(List *pl, void (*pf)(int *pe));

#endif


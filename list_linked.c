#include"list_linked.h"
#include <stddef.h>

static void InitList(List *pl){
    pl->current = NULL;
    pl->head = NULL;
    pl->currentPos = -1;
    pl->Size = 0;
}
static void InsertList(int pos, int e, List *pl){
    Node *pn = malloc(sizeof(Node));
    pn->entry = e;
    if(pos == 0){
        pn->next = pl->head;
        pn->prev = pl->head;
        pl->head = pn;
        pl->currentPos = 0;
        pl->current = pl->head;
    }
    else if(pos <= pl->currentPos){
        for(; pl->currentPos != pos-1; pl->currentPos--)
            pl->current = pl->current->prev;
        pn->next = pl->current->next;
        pn->prev = pl->current->prev;
        pl->current->prev = pn;
    }
    else {
        for(;pl->currentPos != pos-1; pl->currentPos++)
            pl->current = pl->current->next;
        pn->next = pl->current->next;
        pn->prev = pl->current->prev;
        pl->current->next = pn;
    }
    pl->Size++;
}
static short is_listFull(List *pl){
    return 0;
}
static void retrieve(int pos, int *pe, List *pl){
    if(pos == 0){
        *pe = pl->head->entry;
    }
    else if(pos <= pl->currentPos){
        for(; pl->currentPos != pos; pl->currentPos--)
            pl->current = pl->current->prev;
        *pe = pl->current->entry;
    }
    else {
        for(; pl->currentPos != pos; pl->currentPos++)
            pl->current = pl->current->next;
        *pe = pl->current->entry;
    }
}
static void deleteList(int pos, int *pe, List *pl){
    Node *pn;
    if(pos == 0){
        *pe = pl->head->entry;
        pl->current = pl->head->next;
        free(pl->head);
        pl->head = pl->current;
        pl->currentPos = 0;
    }
    else if(pos <= pl->currentPos){
        for(; pl->currentPos != pos; pl->currentPos--)
            pl->current = pl->current->prev;
        *pe = pl->current->entry;
        pn->next = pl->current->next;
        pn->prev = pl->current->prev;
        free(pl->current);
        pl->current = pn;
    }
    else {
        for(; pl->currentPos != pos; pl->currentPos++)
            pl->current = pl->current->next;
        *pe = pl->current->entry;
        pn->next = pl->current->next;
        pn->prev = pl->current->prev;
        free(pl->current);
        pl->current = pn;
    }
    pl->Size--;
}
static void clearList(List *pl){
    Node *pn;
    while(pl->head){
        pn = pl->head->next;
        free(pl->head);
        pl->head = pn;

    }
    pl->Size = 0;
}
static void sizeList(List *pl){
    return pl->Size;
}
static void traverseList(List *pl, void (*pf)(int *pe)){
    Node *pn;
    pn = pl->head;
    while(pn->next){
        (*pf)(pn->entry);
        pn = pn->next;
    }
}




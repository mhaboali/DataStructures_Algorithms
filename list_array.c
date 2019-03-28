#include"list_array.h"
static void InitList(List *pl){
    pl->Size = 0;
}
static void InsertList(int pos, int e, List *pl){
    if(pos == 0){
        pl->entry[pos] = e;
        pl->Size++;
    }
    else{
        int i ;
        for (i = pl->Size; i<pos-1;i--)
            pl->entry[i+1] = pl->entry[i];
        pl->entry[pos] = e;
        pl->Size++;
    }
}
static short is_listFull(List *pl){
    return pl->Size == MAX_SIZE;
}
static void deleteList(int pos, int *pe, List *pl){
    *pe = pl->entry[pos];
    int i;
    for(i = pos+1; i<pl->Size;i++)
        pl->entry[i-1] = pl->entry[i];
    pl->Size--;
}
static void retrieve(int pos, int *pe, List *pl){
    *pe = pl->entry[pos];
}
static void clearList(List *pl){
    pl->Size=0;
}
static void traverseList(List *pl, void (*pf)(int *pe)){
    int i = 0;
    while(pl->entry[i]){
        (*pf)(pl->entry[i]);
        i++;
    }
}

#include"queue_linked.h"
#include <stddef.h>

static void InitQueue(Queue *pq){
    pq -> Front = NULL;
    pq -> Rear = NULL;
    pq -> Size = 0;
}
static void append(int e, Queue *pq){
    Node *pn = malloc(sizeof(Node));
    if(pn){
        pn ->entry = e;
        pn ->next = NULL;
        if(!pq ->Rear)
            pq ->Front = pn;
        else
            pq ->Rear ->next = pn;
        pq ->Rear = pn;
        pq ->Size++;
    }
}
static short is_queueFull(Queue *pq){
    return 0;
}
static void serve(int *pe, Queue *pq){
    *pe = pq ->Front->entry;
    Node *pn = pq ->Front;
    pq ->Front = pq->Front->next;
    free(pn);
    if(!pq->Front)
        pq->Rear = NULL;
    pq ->Size--;
}
static void queueFront(int* pe, Queue *pq){
    *pe = pq ->Front->entry;
}
static void clearQueue(Queue *pq){
    while(pq->Front){
        pq->Rear = (pq->Front)->next;
        free(pq->Front);
        pq->Front = pq->Rear;
    }
    pq -> Size = 0;
}
static void traverseQueue(Queue *pq, void (*pf)(int *pe)){
    int s = pq->Size;
    while(s--){
        (*pf)(pq->Front->entry);
    }
}



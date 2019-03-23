#include"queue_array.h"

static void InitQueue(Queue *pq){
    pq -> Front = 0;
    pq -> Rear = -1;
    pq -> Size = 0;
}
static void append(int e, Queue *pq){
    pq ->entry[(++pq->Rear)%MAX_SIZE] = e;
    pq ->Size++;
}
static short is_queueFull(Queue *pq){
    return pq->Size == MAX_SIZE;
}
static void serve(int *pe, Queue *pq){
    *pe = pq ->entry[(pq->Front++)%MAX_SIZE];
    pq ->Size--;
}
static void queueFront(int* pe, Queue *pq){
    *pe = pq ->entry[pq->Front];
}
static void clearQueue(Queue *pq){
    pq -> Front = 0;
    pq -> Rear = -1;
    pq -> Size = 0;
}
static void traverseQueue(Queue *pq, void (*pf)(int *pe)){
    int s = MAX_SIZE;
    while(s--){
        (*pf)(pq->entry[pq->Front++%MAX_SIZE]);
    }
}


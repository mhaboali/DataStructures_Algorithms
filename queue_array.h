
#ifndef QUEUE_ARRAY_H_
#define QUEUE_ARRAY_H_

#define MAX_SIZE    100

typedef struct queue{
    int Front;
    int Rear;
    int Size;
    int entry[MAX_SIZE];
}Queue;

static void InitQueue(Queue *pq);
static void append(int e, Queue *pq);
static short is_queueFull(Queue *pq);
static void serve(int *pe, Queue *pq);
static void queueFront(int* pe, Queue *pq);
static void clearQueue(Queue *pq);
static void traverseQueue(Queue *pq, void (*pf)(int *pe));

#endif

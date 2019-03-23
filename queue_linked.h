
#ifndef QUEUE_LINKED_H_
#define QUEUE_LINKED_H_

typedef struct node{
    int entry;
    struct node *next;
}Node;

typedef struct queue{
    Node *Front;
    Node *Rear;
    int Size;
}Queue;

static void InitQueue(Queue *pq);
static void append(int e, Queue *pq);
static short is_queueFull(Queue *pq);
static void serve(int *pe, Queue *pq);
static void queueFront(int* pe, Queue *pq);
static void clearQueue(Queue *pq);
static void traverseQueue(Queue *pq, void (*pf)(int *pe));

#endif


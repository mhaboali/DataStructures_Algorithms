#ifndef BT
#define BT

typedef struct node{
    int entry;
    struct node *left, *right;
}Node;

typedef struct tree{
    Node *root;
    int Size;
    int depth;
}Tree;

void createTree(Tree *pt);
short emptyTree(Tree *pt);
void InorderTraverse(Tree *pt, void (*pvisit)(int));
void clearTree(Tree *pt);
void inserTreeAux(Tree *pt, int *pe, int *pdepth);
void inserTree(Tree *pt, int *pe);
short findTreeItem(Tree *pt, int *pe, int k);
short deleteTreeItem(Tree *pt, int *pe, int k);


#endif // BT

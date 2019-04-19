#include"Binary_Tree.h"
#include <stddef.h>

void createTree(Tree *pt){
    pt->root = NULL;
    pt->Size = 0;
    pt->depth = 0;
}
short emptyTree(Tree *pt){
    return pt->Size;
}
void InorderTraverse(Tree *pt, void (*pvisit)(int))
{
    if(!pt->root){
        InorderTraverse(&(pt->root->left), pvisit);
        (*pvisit)(pt->root->entry);
        InorderTraverse(&(pt->root->right),pvisit);
    }
}
void clearTree(Tree *pt)
{
    if(pt->root){
        clearTree(&(pt->root->left));
        clearTree(&(pt->root->right));
        clearTree(pt->root);
    }
    pt->root = NULL;
    pt->Size = 0;
    pt->depth = 0;
}
void inserTreeAux(Tree *pt, int *pe, int *pdepth)
{
    if(!pt->root){
        pt->root = (Tree *) malloc(sizeof(Node));
        pt->root->entry = *pe;
        pt->root->right = NULL;
        pt->root->left = NULL;
    }else if(*pe < pt->root->entry)
        inserTreeAux(&(pt->root->left), pe, pdepth);
    else
        inserTreeAux(&(pt->root->right), pe, pdepth);
    (*pdepth)++;

}
void inserTree(Tree *pt, int *pe)
{
    int *d = 0;
    inserTreeAux(&pt->root, pe, d);
    if(pt->depth <d)
        pt->depth = d;
    pt->Size++;
}
short findTreeItem(Tree *pt, int *pe, int k)
{
    if(!pt->root)
        return 0;
    if(pt->root->entry == k)
    {
        *pe = pt->root->entry;
        return 1;
    }
    else if (pt->root->entry <k)
        return findTreeItem(&(pt->root->left), pe, k);
    else
        return findTreeItem(&(pt->root->left),pe,k);
}

void deleteTreeNode(Tree *pt)
{
    Node *q = pt->root,*r;
    if(!(pt->root)->left)
        pt->root = (pt->root)->right;
    else if(!(pt->root)->right)
        pt->root = (pt->root)->left;
    else{
        /*
        *pt = (*pt)->right;
        for(r = q->right;r->left;r=r->left);
        r->left = q->left;
        */
        q = (pt->root)->left;
        if(!q->right){
            (pt->root)->entry = q->entry;
            (pt->root)->left = q->left;
        }
        else{
            do{
                r =q;
                q=q->right;
            }while(q->right);
            (pt->root)->entry = q->entry;
            r->right = q->left;
        }


    }
    free(q);
}

short deleteTreeItem(Tree *pt, int *pe, int k)
{
    short found = 0;
    Node *q= pt->root, *r = NULL;
    while(q && !(found = (k==q->entry)?1:0))
    {
        r = q;
        if(k<q->entry)
            q= q->left;
        else
            q = q->right;
    }
    if(found)
    {
        *pe = q->entry;
        if(!r)
            deleteTreeNode(pt);
        else if(k<r->entry)
            deleteTreeNode(&r->left);
        else
            deleteTreeNode(&r->right);
    }
    return found;
}

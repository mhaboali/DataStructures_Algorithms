#include"graph.h"
#include <stddef.h>

void createGraph(Graph *pg)
{
    pg->n= 0;
    for(int i=0;i<MAXVERTEX;i++)
        pg->entry[i].firstEdge=NULL;
}
void dfsAux(Graph *pg, int k, void(*visit)(int), int visited)
{
    (*visit)(pg->entry[k].entry);
    visited[k] = 1;
    for(Edge *t=pg->entry[k].firstEdge; t; t=t->nextEdge)
        if(!visited[t->endPoint])
            dfsAux(pg,t->endPoint,visit, visited);

}
void traversalDFS(Graph *pg, int start, void(*visit)(int))
{
    int visited[MAXVERTEX], i;
    for(i=0; i<MAXVERTEX;i++)
        visited[i]=0;
    dfsAux(pg,start,visit,visited);
    for(i=0;i<pg->n;i++)
        if(!visited[i])
            dfsAux(pg,i,visit,visited);
}

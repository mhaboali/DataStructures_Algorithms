#ifndef GRAPH
#define GRAPH

#define MAXVERTEX 100

typedef struct graphAdjMat
{
    int n;
    int A[MAXVERTEX][MAXVERTEX];
}GraphAdjacencyMatrix;

typedef struct edge
{
    int endPoint;           //adjacent vertex
    struct edge *nextEdge;
}Edge;

typedef struct vertex       //main vertecies
{
    int entry;
    Edge *firstEdge;
}Vertex;

typedef struct graphAdjList
{
    int n;
    Vertex entry[MAXVERTEX];
}Graph;

void createGraph(Graph *pg);
void dfsAux(Graph *pg, int k, void(*visit)(int), int visited);
void traversalDFS(Graph *pg, int start, void(*visit)(int));

#endif // GRAPH

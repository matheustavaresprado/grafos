#include <stdio.h>
#include <stdlib.h>

/*Constantes*/
#define MAX_INIT 10
#define VL_NOTFOUND -1
#define VL_INIT 0

/*Estrutura*/
typedef struct graph{
	int **matrix;
	int vertexSize, edgeSize;
}Graph;


/*inicia um grafo vazio*/
Graph initGraph();

/*inserção de um novo vértice*/
void insertVertex(Graph *g, char v);

/*inserção de uma nova aresta*/
void insertEdge(Graph *g, char v, char u);

/*remoção de um vértice já existente*/
void removeVertex(Graph *g, char v);

/*remoção de uma aresta já existente*/
void removeEdge(Graph *g, char v, char u);

/*determinar se dois vértices são adjacentes*/
int isNeighbour(Graph g, char v, char u);

/*imprime todos os vizinhos de um vértice*/
void neighbours(Graph g, char v);

/*determinar número de vértices*/
int vertexSize(Graph g);

/*determinar número de arestas*/
int edgeSize(Graph g);

/*termina um grafo*/
void endGraph(Graph *g);


/*funcoes extras*/

/*realiza a busca por um vertice*/
int searchVertex(Graph *g, char v);

/*printa a matriz*/
void printMatrix(Graph g);
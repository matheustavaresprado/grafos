#include "graphIncid.h"


/*
* inicia um grafo vazio
* esta funçao inicia com uma matriz MAX_INIT x MAX_INIT, caso precise,
* depois haverah realocamento
*/
Graph initGraph(){
	Graph g;
	g.vertexSize = 0;
	g.edgeSize = 0;
	
	g.matrix = (int**)malloc(sizeof(int*)*MAX_INIT);
	int i, j;
	for(i = 0; i<MAX_INIT; i++){
		g.matrix[i] = (int*)malloc(sizeof(int)*MAX_INIT);
		for(j = 0; j<MAX_INIT; j++){
			g.matrix[i][j] = VL_INIT;
		}
	}
	g.matrix[0][0] = '-';
	return g;
}

/*inserção de um novo vértice*/
void insertVertex(Graph *g, char v){
	if(searchVertex(g, v) != VL_NOTFOUND){
		printf("Vertice %c ja existe.\n", v);
		return;
	}
	
	if(g->vertexSize+1 >= MAX_INIT){ // realocar a matriz
		int **newp = (int**)realloc(g->matrix,sizeof(int*)*(g->vertexSize+2));
		
		if(newp == NULL){
			printf("Erro no realloc para inserir vertice. Nao foi possivel inserir.\n");
			return;
		}
		g->matrix = newp;
		
		/*o valor  o maior entre MAX_INIT e edgeSize*/
		int valor = (g->edgeSize > MAX_INIT? g->edgeSize : MAX_INIT);
		
		/*o +2 pq o vertexSize sempre tem o numero de linhas da matriz-1 (+1) e o +1 da nova linha*/
		int i;
		for(i = 0; i<g->vertexSize+2; i++){ 
			*(g->matrix+i) = (int*)realloc(*(g->matrix+i),sizeof(int)*valor);
		}
		for(i = 1; i<valor; i++){
			g->matrix[g->vertexSize+1][i] = 0;
		}
		
		g->matrix[g->vertexSize+1][0] = v;
		//g->matrix[0][0] = '-';
		g->vertexSize++;
		return;
	}
	g->matrix[g->vertexSize+1][0] = v;
	g->vertexSize++;
}


/*inserção de uma nova aresta*/
void insertEdge(Graph *g, char v, char u){
	int pos1 = searchVertex(g, v);
	int pos2 = searchVertex(g, u);
	
	if(v == VL_NOTFOUND || u == VL_NOTFOUND){
		printf("Os vertices %c e %c sao invalidos.\n", v, u);
		return;
	} 
	
	if(g->edgeSize+1 >= MAX_INIT){ //realoca
		int i, j;
		for(i = 0; i<g->vertexSize+1; i++){
			*(g->matrix+i) = (int*)realloc(*(g->matrix+i), sizeof(int)*(g->edgeSize+2));
		}
		
		for(j = 0; j<g->vertexSize+1; j++){
			g->matrix[j][g->edgeSize+2] = 0;
			//g->matrix[j][g->edgeSize+2] = 9;
		}
		
		g->matrix[0][g->edgeSize+1] = g->edgeSize+1;
		g->matrix[pos1][g->edgeSize+1] = 1;
		g->matrix[pos2][g->edgeSize+1] = 1;
		g->edgeSize++;
		return;
	}
	
	g->matrix[0][g->edgeSize+1] = g->edgeSize+1;
	g->matrix[pos1][g->edgeSize+1] = 1;
	g->matrix[pos2][g->edgeSize+1] = 1;
	g->edgeSize++;
}

/*remoção de um vértice já existente*/
void removeVertex(Graph *g, char v){
	if(searchVertex(g, v) == VL_NOTFOUND){
		printf("Vertice %c nao existe.\n", v);
		return;
	}
	
}

/*Funcoes extras*/

int searchVertex(Graph *g, char v){
	int i = 1;
	while(g->matrix[i][0] != v && i<g->vertexSize){
		i++;
	}
	
	if(i >= g->vertexSize){
		return VL_NOTFOUND;
	}
	return i;
}


void printMatrix(Graph g){
	printf("\n");
	int valor = (g.edgeSize+1 > MAX_INIT? g.edgeSize+1 : MAX_INIT);
	int i,j;
	for(i = 0; i<g.vertexSize+1; i++){
		for(j = 0; j<valor; j++){
			if(j == 0 && g.matrix[i][j] != 0){
				printf("%c ", g.matrix[i][j]);
			}
			else{
				printf("%d ", g.matrix[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
}

void redimensionaMatrix(int **mat, int oldLines, int oldCols, int newLines, int newCols){
	
	int **ptr = (int**)realloc(mat, sizeof(int*)*newLines);
	
	if(ptr == NULL){
		printf("Erro na realocacao.\n");
		return;
	}
	
	mat = ptr;
	
	int i;
	
	for(i = 0; i<newLines; i++){
		//parei aqui
	}
	
	
	
}






















































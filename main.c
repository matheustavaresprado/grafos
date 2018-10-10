#include "graphIncid.c"

int main(){
	
	Graph g = initGraph();
	insertVertex(&g, 'a');
	insertVertex(&g, 'b');
	insertVertex(&g, 'c');
	insertVertex(&g, 'd');
	insertVertex(&g, 'e');
	insertVertex(&g, 'f');
	insertVertex(&g, 'g');
	insertVertex(&g, 'h');
	insertVertex(&g, 'i');
	insertVertex(&g, 'j');
	insertVertex(&g, 'k');
	insertVertex(&g, 'l');
	printMatrix(g);
	printf("----------------------------------\n");
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	insertEdge(&g, 'a', 'b');
	printMatrix(g);
	
	printf("----------------------------------\n");
	

	/*
	int dim1 = 5, dim2 = 5, num = 5;
	int **mat = (int**)malloc(sizeof(int*)*dim1);
	
	for(int i = 0; i<dim1; i++){
		mat[i] = (int*)malloc(sizeof(int)*dim2);
		for(int j = 0; j<dim2; j++){
			mat[i][j] = 1;
		}
	}
	
	
	for(int i = 0; i<dim1; i++){
		for(int j = 0; j<dim2; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("-------------------------------\n");
	
	int **ptr = (int**)realloc(mat,sizeof(int*)*(dim1+num));
	
	if(ptr != NULL){
		printf("aqui\n");
		//free(mat);
	}
	
	mat = ptr;
	
	for(int i = 0; i<dim1+num ; i++){
		*(mat+i) = (int*)realloc(*(mat+i),sizeof(int)*(dim2+num));
		for(int j = 0; j<dim2+num; j++){
			mat[i][j] = 1;
		}
	}
	
	
	for(int i = 0; i<dim1+num; i++){
		for(int j = 0; j<dim2+num; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	*/
	
	return 0;
}
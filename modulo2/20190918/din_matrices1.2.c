/*

Modulo 2

Arrays dinamicos de dos dimensiones. Creacion y operaciones.

Esta version esta limitada en cuanto al numero de filas

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 5
#define M 10


void cargarfila(int * ptrs[],int fila,int elementos){
	//Se recibe el array completo. Cualquier modificacion en una casilla afecta fuera
	//porque el nombre del array representa un puntero.
	int i;

	ptrs[fila]=(int *) malloc(sizeof(int)*elementos);
	for(i=0;i<elementos;i++)
		ptrs[fila][i]=rand()%100;
}

void intercambiarFilas(int * ptrs[], int fila1, int fila2){
	int * aux=ptrs[fila1];	
	ptrs[fila1]=ptrs[fila2];
	ptrs[fila2]=aux;
}

void intercambiarFilas2(int ** f1, int ** f2){
	int * aux= * f1;
	* f1 = * f2;
	* f2= aux;
}


void intercambiarColumnas(int * ptrs[], int col1, int col2, int n){
	int aux;
	for(int i=0;i<n;i++){
		aux=ptrs[i][col1];
		ptrs[i][col1]=ptrs[i][col2];
		ptrs[i][col2]=aux;
	}
}



void imprimir(int * fila, int m){
	int i;

	for(i=0;i<m;i++)
		printf("%2d ",fila[i]);
	puts("");
}



int main(){

	//Inicializar la semilla de num. aleatorios
	srand(time(NULL));

	//Array de punteros a entero:
	int * matriz[N];

	//Inicializacion:
	int i;

	for(i=0;i<N;i++)
		matriz[i]=NULL;

	//Cargar
	for(i=0;i<N;i++)
		cargarfila(matriz,i,M);

	//Imprimir
	for(i=0;i<N;i++){
		printf("%d:",i);
		imprimir(matriz[i],M);
	}

	//Intercambiar filas
	intercambiarFilas(matriz,1,2);
	printf("\n\n");

	//Imprimir 2
	for(i=0;i<N;i++){
		printf("%d:",i);
		imprimir(matriz[i],M);
	}

	//Intercambiar columnas
	intercambiarColumnas(matriz,4,5,N);
	printf("\n\n");

	//Imprimir 3
	for(i=0;i<N;i++){
		printf("%d:",i);
		imprimir(matriz[i],M);
	}

	//Liberar las filas
	for(i=0;i<N;i++){
		free(matriz[i]);
		matriz[i]=NULL;
	}


}

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

/*
MAL - SE GENERA UN PUNTERO DENTRO DE LA FUNCION Y LUEGO SE PIERDE

La llamada seria: reservarFilaSolo(matriz[0],M) --> ESTA MAL

Se recibe solo la casilla del array, para que cambie tiene que venir por puntero, es decir
int ** o devolver int * en la funcion

void reservarFilaSolo(int * matriz,int fila,int m){
	//Solo recibimos una fila de la matriz.
	int i;

	matriz= (int *) malloc(sizeof(int)* m);
	for(i=0;i<m;i++)
		matriz[fila][i]=rand()%100;
}

Correccion a continuacion
*/

int * reservarFilaSolo(int * matriz,int m){
	//Solo recibimos una fila de la matriz.
	int i;

	matriz= (int *) malloc(sizeof(int)* m);
	for(i=0;i<m;i++)
		matriz[i]=rand()%100;

	return matriz;
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

	//Ejemplo cargar fila 0

	/*
	matriz[0]=(int *) malloc(sizeof(int)*M); //puntero
	//matriz[0][0]=(int *) malloc(sizeof(int)*M); //ERROR matriz[0][0] es un entero

	for(i=0;i<M;i++)
		matriz[0][i]=rand()%100;
	*/

	for(i=0;i<N;i++)
		cargarfila(matriz,i,M);

	for(i=0;i<N;i++)
		imprimir(matriz[i],M);


	//Liberar la fila 0
	for(i=0;i<N;i++){
		free(matriz[i]);
		matriz[i]=NULL;
	}


}

/*

Modulo 2
Buscaminas

19/09/2019
14:17

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct{
	int fila,col;
} TCoor;

typedef struct nodo{
	TCoor coor;
	struct nodo * sig; //Puntero al siguiente nodo

} TNodo; //Alias

//////////////////////////////////////////////////////////////////////////////////////////////////////

TNodo * insertarCoordenada(TNodo * lista, TCoor nCoor){

	TNodo * nuevo;

	//Crear el nodo:
	nuevo = (TNodo *) malloc(sizeof(TNodo));
	
	//Copiar la informacion
	nuevo->coor=nCoor;
	nuevo->sig=NULL;

	//Enganchar con la lista
	nuevo->sig = lista;
	lista=nuevo;

	return lista;
	
}

TCoor generarCoordenadas(int tope){

	TCoor coor;
	coor.fila=rand()%tope;
	coor.col=rand()%tope;

	return coor;
}

void imprimir(TNodo * lista){

	TNodo * aux=lista;
	
	while (aux !=NULL){
		printf("%d:%d\t",(aux->coor).fila,(aux->coor).col);
		aux=aux->sig;
	}
}

int existeCoor(TNodo * lista,TCoor nCoor){
	//Devuelve 1 si el numero existe en la lista, 0 si no existe
	TNodo * aux=lista;
	
	while (aux !=NULL){
		if((aux->coor).fila==nCoor.fila && (aux->coor).col==nCoor.col)
			return 1;
		aux=aux->sig;
	}
	return 0;
}

TNodo * generarLIstaCoordenadas(TNodo *lista, int numCoordenadas, int tope){

	TCoor nCoor;
	int i;

	for(i=0;i<numCoordenadas;i++){
		do{
			nCoor=generarCoordenadas(tope);

		}while(existeCoor(lista,nCoor)!=0);

	lista=insertarCoordenada(lista,nCoor);
	}
	
	return lista;
}





//////////////////////////////////////////////////////////////////////////////////////////////////////

// Con triple puntero
void inicializarTablero (int n,float *** matriz){

	int i,j;
	float k=1.0;
	float ** aux;
	
	aux=(float **)malloc(sizeof(float *)*n);
	for(i=0;i<n;i++){
		aux[i]=(float *)malloc(sizeof(float)*n);
		for(j=0;j<n;j++,k++)
			aux[i][j]=0;
	}	
	* matriz=aux;
}

void imprimir(int n,float ** matriz){
	
	int i,j;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%4g\t",matriz[i][j]);
		printf("\n\n");
	}	
}

float ** liberar(int f,float ** matriz){
	int i;

	for(i=0;i<f;i++){
		free(matriz[i]);
		matriz[i]=NULL;
	}

	free(matriz);
	return NULL;
}




int main(){

	float ** tablero = NULL; //Inicializamos el doble puntero
	int nTablero;
	int nBombas;

	//1. Pedir tamanyo del tablero
	puts("\nEntradas del tablero nxn:");
	fflush(stdin);
	scanf("%d",&nTablero);

	//2. Construir tablero e inicializar a cero
	inicializarTablero(nTablero,&tablero);

	//Imprimir
	imprimir(nTablero,tablero);

	//3. Pedir numero de bombas
	puts("\nBombas:");
	fflush(stdin);
	scanf("%d",&nBombas);

	//4. Generar numero de bombas
	//listaBombas = generarListaCoordenadas(listaBombas,nBombas,nTablero);
	//imprimirCoordenadas(lista);

	//5. Colocar bombas en el tablero
	//colocarBombas(listaBombas,tablero);

	//6. Recuento de casillas adyacentes a una bomba
	//recuentoCasillas(listaBombas,tablero);

	//7. Imprimir tablero
	//imprimirTablero(nTablero,tablero);


	//Liberar
	tablero=liberar(nTablero,tablero);

	//printf("Direccion matriz: %p",tablero);

}

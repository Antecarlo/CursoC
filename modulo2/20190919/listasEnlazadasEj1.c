/*
Modulo 2

Lista enlazada: ej1

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


typedef struct{
	int fila,col;
} TCoor;

typedef struct nodo{
	TCoor coor;
	struct nodo * sig; //Puntero al siguiente nodo

} TNodo; //Alias



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

void imprimirRecur(TNodo * lista){

	if(lista !=NULL){
		printf("%d:%d ",(lista->coor).fila,(lista->coor).col);
		imprimirRecur(lista->sig);
	}else printf("\n");
}

void imprimirRecurR(TNodo * lista){

	if(lista !=NULL){
		imprimirRecurR(lista->sig);
		printf("(%d:%d) ",(lista->coor).fila,(lista->coor).col);
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

int existeCoorR(TNodo * lista, TCoor nCoor){

	if(lista !=NULL){
		if((lista->coor).fila==nCoor.fila && (lista->coor).col==nCoor.col){
			return 1;
		}else
			return existeCoorR(lista->sig,nCoor);
	}else return 0;
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

int main(){
	

	//Semilla
	srand(time(NULL));	

	TNodo * lista= NULL;

	/*
	TCoor c1={6,7},c2={1,5},c3={8,6},c4={0,0};

	lista=insertarCoordenada(lista,c1);
	lista=insertarCoordenada(lista,c2);
	lista=insertarCoordenada(lista,c3);
	lista=insertarCoordenada(lista,c4);

	imprimir(lista);

	if (existeCoor(lista,c4))
		puts("\nExiste");
	else
		puts("\nNo existe");
	puts("");
	*/


	int nc;
	int tope;

	printf("Numero de coordenadas:\n");
	fflush(stdin);
	scanf("%d",&nc);

	
	printf("Tope:\n");
	fflush(stdin);
	scanf("%d",&tope);
		

	lista=generarLIstaCoordenadas(lista, nc,tope);

/*
	for(i=0;i<nc;i++){

	TCoor coor;
	
	do{
		coor.fila=rand()%N;
		coor.col=rand()%N;
		ex=existeCoor(lista,coor);

	}while(ex!=0);
	
	lista=insertarCoordenada(lista,coor);

	}
*/
	imprimir(lista);





	
}

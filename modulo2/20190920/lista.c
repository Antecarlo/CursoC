/*
Modulo 2

Lista

20/09/2019
08:31

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
	printf("--\n\n");
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

TNodo * generarListaCoordenadas(TNodo *lista, int numCoordenadas, int tope){

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

int borrarPrimero(TNodo ** lista){
	//Borrar el primer elemento de la lista
	TNodo * aux;

	if(* lista !=NULL){
		//Puedo borrar el primer nodo
		aux= * lista;
		* lista = (* lista)->sig;

		free(aux);
		aux=NULL;
		return 1;
	}else
		return 0;
}

void borrarElementos(TNodo ** lista){
	//Borrar todos los elementos de la lista
	TNodo * aux;

	while(* lista !=NULL){
		aux= * lista;
		* lista = (* lista)->sig;
		free(aux);
		aux=NULL;
	}
}


int borrarElemento(TNodo ** lista, int id){
	//Borra un elemento concreto de la lista
	TNodo * ant=NULL;
	TNodo * aux=* lista;
	int i;

	if(* lista!= NULL){
		i=0;
		while(aux!=NULL && id!=i){
			ant=aux;
			aux=aux->sig;
			i++;
		}

		if(id==i){
			if(ant!=NULL){
				ant->sig=aux->sig;
			}else{
				(* lista)=aux->sig;
			}
			free(aux);
			aux=NULL;
			return 1;			
		}else{
			printf("Indice no encontrado");
			return 0;
		}
	
	}else{
		printf("La lista esta vacia\n");
		return 0;
	}

}

/*
int borrarNumero(TNodo ** lista, int numero){
	TNodo * ant= NULL;
	TNodo * aux=* lista;

	while(aux!=NULL){
		if(numero==aux->numero)break;

		ant=aux;
		aux=aux->sig;
	}

	if(aux==NULL)
		//No existe el numero
		return 0;

	else{
		//El numero lo hemos encontrado
		if(ant==NULL)
			//Es el primer nodo
			* lista= aux->sig;

		else
			//Esta en medio o es el ultimo
			ant->sig = aux->sig;

		//liberar el nodo
		free(aux);
		aux=NULL;
	
		return 1;

	}
			
}
*/


void insertarUltimo(TNodo ** lista, TCoor nCoor){

	TNodo * aux;
	TNodo * nuevo;

	// Crear el nuevo nodo:
	nuevo= (TNodo *) malloc(sizeof(TNodo));
	nuevo->coor=nCoor;
	nuevo->sig=NULL;

	if(lista==NULL){
		//SI la lista esta vacia
		* lista=nuevo;
	}else{
		//Ir hasta el final pero parando en el ultimo nodo
		aux=* lista;
		while(aux->sig!=NULL){
			aux=aux->sig; //Avanzar para llegar al ultimo nodo
		}
		//Enganchar el ultimo nodo con el nuevo
		aux->sig = nuevo;
	}

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
		

	lista=generarListaCoordenadas(lista, nc,tope);

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

	
	//imprimir(lista);

	//int bor=borrarPrimero(&lista);
	//printf("\nHe borrado: %d\n",bor);

	//borrarElementos(&lista);

	//TCoor nCoor = generarCoordenadas(tope);
	//insertarUltimo(&lista,nCoor);


	
	imprimir(lista);

	int id;
	printf("Posicion a borrar:\n");
	fflush(stdin);
	scanf("%d",&id);

	int bor = borrarElemento(&lista, id);

	imprimir(lista);





	
}

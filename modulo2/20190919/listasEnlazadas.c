/*
Modulo 2

Lista enlazada, operaciones insertar, imprimir, buscar, etc.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct nodo{

	int numero;
	struct nodo * sig; //Puntero al siguiente nodo

} TNodo; //Alias



TNodo * insertarPrimero(TNodo * lista,int num){

	TNodo * nuevo;

	//Crear el nodo:
	nuevo = (TNodo *) malloc(sizeof(TNodo));
	
	//Copiar la informacion
	nuevo->numero=num;
	nuevo->sig=NULL;

	//Enganchar con la lista
	nuevo->sig = lista;
	lista=nuevo;

	return lista;
	
}

void imprimir(TNodo * lista){

	TNodo * aux=lista;
	
	while (aux !=NULL){
		printf("%d ",aux->numero);
		aux=aux->sig;
	}
}

void imprimirRecur(TNodo * lista){

	if(lista !=NULL){
		printf("%d ",lista->numero);
		imprimirRecur(lista->sig);
	}else printf("\n");
}

void imprimirRecurR(TNodo * lista){

	if(lista !=NULL){
		imprimirRecurR(lista->sig);
		printf("%d ",lista->numero);
	}
}

int existeNumero(TNodo * lista,int num){
	//Devuelve 1 si el numero existe en la lista, 0 si no existe
	TNodo * aux=lista;
	
	while (aux !=NULL){
		if((aux->numero)==num)
			return 1;
		aux=aux->sig;
	}
	return 0;
}

int existeNumeroR(TNodo * lista, int num){
	//Devuelve 1 si el numero existe en la lista, 0 si no existe
	if(lista !=NULL){
		if((lista->numero)==num){
			return 1;
		}
	int r=existeNumeroR(lista->sig,num);
	}else return 0;
}

int existeNumeroRAntonio(TNodo * lista, int num){

	if(lista !=NULL){
		if((lista->numero)==num){
			return 1;
		}else
			return existeNumeroR(lista->sig,num);
	}else return 0;
}


int main(){

	TNodo * lista= NULL;
	lista=insertarPrimero(lista,5);
	lista=insertarPrimero(lista,0);
	lista=insertarPrimero(lista,1);

	//imprimir(lista);
	imprimirRecur(lista);
	imprimirRecurR(lista);

	
	int num=existeNumero(lista,5);
	printf("\n\nExiste 5 o no:%d",num);

	int num2=existeNumero(lista,8);
	printf("\nExiste 8 o no:%d\n",num2);

	int num3=existeNumeroR(lista,2);
	printf("\n\nExiste 2 o no con recursividad:%d",num3);

	int num4=existeNumeroR(lista,5);
	printf("\nExiste 5 o no con recursividad:%d\n",num4);
	
}

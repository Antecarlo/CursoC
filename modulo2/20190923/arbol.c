/*
Modulo 2

Algoritmos de gestion de arboles binarios

23/09/2019
09:30

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


typedef struct nodo{
	//Dato
	int numero;
	
	struct nodo * izq; //Estructura autoreferenciada
	struct nodo * der;
}TNodo;

typedef struct nodoNom{
	//Dato
	char nombre[30];
	//char * nombre; DARIA ERROR
	
	struct nodoNom * izq; //Estructura autoreferenciada
	struct nodoNom * der;
}TNodoNombres;



//////////////////////////////////////////////////////////////////////////////////////////////////////

TNodo * insertar(TNodo * raiz,int numero){
	TNodo * aux;

	if(raiz==NULL){

		//Crear el nuevo nodo:
		aux=(TNodo *) malloc(sizeof(TNodo));
		aux->numero=numero;
		aux->izq=NULL;
		aux->der=NULL;

		raiz=aux;
	}else if(numero<raiz->numero){
		raiz->izq=insertar(raiz->izq,numero);
	}else if(numero>raiz->numero){
		raiz->der=insertar(raiz->der,numero);
	}else{
		printf("\nEl numero esta repetido\n");
	}
	return raiz;
}

void preOrden(TNodo * raiz){

	if(raiz!=NULL){
		// Raiz;		
		printf("\t%d",raiz->numero);
		preOrden(raiz->izq);
		preOrden(raiz->der);
	}
}

void InOrden(TNodo * raiz){

	if(raiz!=NULL){
		// Raiz;
		InOrden(raiz->izq);		
		printf("\t%d",raiz->numero);
		InOrden(raiz->der);
	}
}

void PostOrden(TNodo * raiz){

	if(raiz!=NULL){
		// Raiz;
		PostOrden(raiz->izq);	
		PostOrden(raiz->der);	
		printf("\t%d",raiz->numero);
		// Aqui en lugar de un printf podemos cambiar a NULL raiz y free(raiz)
	}
}

void PostOrdenBorr(TNodo ** raiz){

	if(* raiz!=NULL){
		// Raiz;
		PostOrdenBorr(&((* raiz)->izq));	
		PostOrdenBorr(&((* raiz)->der));	
		printf("\nLiberando nodo: %d",(* raiz)->numero);

		free(* raiz);
		* raiz=NULL;
	}
}

TNodo * PostOrdenBorr2(TNodo * raiz){

	if(raiz!=NULL){
		// Raiz;
		raiz->izq=PostOrdenBorr2(raiz->izq);	
		raiz->der=PostOrdenBorr2(raiz->der);	
		printf("\nLiberando nodo: %d",raiz->numero);

		free(raiz);
		raiz=NULL;
	}
	return raiz;
}

int contarNodos(TNodo * raiz){
	if(raiz==NULL){
		return 0;
	}else{
		return 1+contarNodos(raiz->izq)+contarNodos(raiz->der);
	}
}

void contarNodos2(TNodo * raiz, int * n){
	if(raiz!=NULL){
		contarNodos2(raiz->izq,n);
		contarNodos2(raiz->der,n);
		* n=* n+1;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

TNodoNombres * insertarNombre(TNodoNombres * raiz, char * nombre){
	TNodoNombres * aux;

	if(raiz==NULL){

		//Crear el nuevo nodo:
		aux=(TNodoNombres *) malloc(sizeof(TNodoNombres));
		strcpy(aux->nombre,nombre);
		aux->izq=NULL;
		aux->der=NULL;
		raiz=aux;

	}else if(strcasecmp(nombre,raiz->nombre)<0){
		raiz->izq=insertarNombre(raiz->izq,nombre);
	}else if(strcasecmp(nombre,raiz->nombre)>0){
		raiz->der=insertarNombre(raiz->der,nombre);
	}else{
		printf("\nEl nombre esta repetido\n");
	}
	return raiz;
}

void InOrdenNombres(TNodoNombres * nombres){

	if(nombres!=NULL){
		// Raiz;
		InOrdenNombres(nombres->izq);		
		printf("\t%s",nombres->nombre);
		InOrdenNombres(nombres->der);
	}
}


int main(){
	TNodo * raiz=NULL;
	int numNodos;
	int numNodos2=0;

	//Insertar
	raiz=insertar(raiz,5);
	raiz=insertar(raiz,3);
	raiz=insertar(raiz,8);
	raiz=insertar(raiz,1);
	raiz=insertar(raiz,7);
	raiz=insertar(raiz,2);

	printf("\nPreOrden");
	preOrden(raiz);

	printf("\nInOrden\t");
	InOrden(raiz);

	printf("\nPostOrden");
	PostOrden(raiz);

	printf("\n");
	//PostOrdenBorr(&raiz);
	//raiz=PostOrdenBorr2(raiz);

	//Contar nodos
	numNodos=contarNodos(raiz);
	printf("El numero de nodos es %d\n",numNodos);

	contarNodos2(raiz, &numNodos2);
	printf("El numero de nodos es %d\n",numNodos2);

//////////////////////////////////////////////////////////////////////////////////////////////////////
//Arbol con nombres

	TNodoNombres * nombres=NULL;
	nombres=insertarNombre(nombres,"Carlos");
	nombres=insertarNombre(nombres,"Beatriz");
	nombres=insertarNombre(nombres,"Fran");
	nombres=insertarNombre(nombres,"Andrea");
	nombres=insertarNombre(nombres,"Lucia");
	nombres=insertarNombre(nombres,"Ana");

	InOrdenNombres(nombres);

}

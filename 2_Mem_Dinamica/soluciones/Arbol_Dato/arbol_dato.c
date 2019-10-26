#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 50

typedef struct {
	char nombre[N];
	int edad;
	float altura;
} TDato;

typedef struct a {
	TDato dato;
	struct a *izq;
	struct a *der;
} TNodo;

TNodo *insertar(TNodo *raiz, TDato dato){
	if (raiz == NULL){
		// Crear el nuevo nodo:
		// Siempre es una hoja.
		raiz = (TNodo *) malloc(sizeof(TNodo));
		raiz->dato = dato;
		raiz->izq = NULL;
		raiz->der = NULL;
		
	} else if (strcasecmp(dato.nombre, raiz->dato.nombre) < 0){
		// Si es menor el nuevo dato contra la raiz 
		
		// Navegar por el subarbol izq:
		raiz->izq = insertar(raiz->izq, dato);
		
	} else if  (strcasecmp(dato.nombre, raiz->dato.nombre) > 0){
		// Si es mayor el nuevo dato contra la raiz
		
		// Navegar por el subarbol der
		raiz->der = insertar(raiz->der, dato);
	}
	return raiz;
}

void enOrden(TNodo *arbol, int nivel){
	// I- R - D
	if (arbol != NULL){
		// IZQ
		enOrden(arbol->izq, nivel+1);
		
		// RAIZ
		printf("\n%d %s %d %g", nivel,
		arbol->dato.nombre,
		arbol->dato.edad,
		arbol->dato.altura);
		
		// DER
		enOrden(arbol->der, nivel+1);
	}
}

void printTab(int nivel){
	int i;
	
	for (i = 0 ; i < nivel ; i++)
		printf("...");
}

void preOrden(TNodo *arbol, int nivel){
	// R - I - D
	if (arbol != NULL){
		// RAIZ
		printTab(nivel);
		printf("%d %s %d %g\n", nivel,
		arbol->dato.nombre,
		arbol->dato.edad,
		arbol->dato.altura);
		
		// IZQ
		preOrden(arbol->izq, nivel+1);
				
		// DER
		preOrden(arbol->der, nivel+1);
	}
}

void liberar(TNodo **arbol){
	if (*arbol != NULL){
		liberar( &((*arbol)->izq) );
		liberar( &((*arbol)->der) );		
		printf("\nLibera %s", (*arbol)->dato.nombre);
		free(*arbol);
		*arbol = NULL;
	}
}

int buscarNombre(TNodo *arbol, const char *nombre){
	
	if (arbol == NULL)
		return 0;
		
	else if (strcasecmp(nombre, arbol->dato.nombre)==0)
		return 1;
		
	else if (strcasecmp(nombre, arbol->dato.nombre) < 0)
		// Es menor -> IZQ
		return buscarNombre(arbol->izq, nombre);
	
	else // Es mayor -> DER
		return buscarNombre(arbol->der, nombre);
}

int main(){
	TNodo *arbol = NULL;
	int i;
	TDato vector[] = 
	{ 
		{"Raul", 34, 1.77},
		{"Sonia", 23, 1.67},
		{"Ramon", 44, 1.55},
		{"Alex", 23, 2.00},
		{"Eva", 12, 1.23}
	};
	
	for (i = 0 ; i < 5 ; i++)
		arbol = insertar(arbol, vector[i]);
		
	puts("En orden");
	enOrden(arbol, 0);
	puts("\n\nPre Orden");
	preOrden(arbol, 0);
	liberar(&arbol);
	puts("");
}


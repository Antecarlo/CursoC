#include <stdio.h>
#include <stdlib.h>

typedef struct d {
        char nombre[20];
        char apellido[20];
        int edad;
} TDato;

typedef struct l {
     TDato dato;
     struct l *sig;
} TLista;


void imprimir(TLista *lista)
{
     TLista *aux = lista;
     
     while (aux != NULL){
           printf("\n%s %s %d", aux->dato.nombre, aux->dato.apellido, aux->dato.edad);
           aux = aux->sig;
     }
     
}

void insertar(TDato d, TLista **lista)
{
     // 1. Definir el nodo:
     TLista *nodo = NULL;
     
     // 2. Reservar espacio para el nuevo nodo:
     nodo = (TLista *)malloc(sizeof(TLista));
           
     // 3. Rellenar con datos el nuevo nodo:
     nodo->dato = d;
                
     // 4. Asignar punteros, para ligar el nuevo nodo:
     nodo->sig = *lista;
     *lista = nodo;  
}

void reverse(TLista *l)
{
     if (l != NULL){
           reverse(l->sig);
           printf("\n%s %s %d", l->dato.nombre, l->dato.apellido, l->dato.edad);
     }      
}

void borrarPrimero(TLista **l){
	// Para borrar el primer nodo necesitamos un auxiliar, y puentear la cabeza de la lista.
	TLista *aux;

	aux = *l;
	*l = (*l)->sig;
	
	free(aux);
	aux = NULL;
}


void liberar(TLista **l)
{
	// Liberamos por el inicio, siempre borrando el primero.
	while (*l != NULL)
		borrarPrimero(l);
}


int main(int argc, char *argv[])
{
  TLista *lista = NULL;
  TDato d1 = {"pepe","sanchez",23};
  TDato d2 = {"juan","garcia",60};
  TDato d3 = {"jorge","perez",12};
  
  insertar(d1, &lista);
  insertar(d2, &lista);
  insertar(d3, &lista);
  
  puts("\nContenido de la lista ...");
  imprimir(lista);
  puts("");

  puts("\nLista invertida ...");
  reverse(lista);
  puts("");
  
  liberar(&lista);
  puts("\nlista liberada ...");
      	
  return 0;
}

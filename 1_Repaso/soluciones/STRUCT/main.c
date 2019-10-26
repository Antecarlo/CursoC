#include <stdio.h>
#include <stdlib.h>

/*
struct Tlibro {
       char titulo[30];
       char editorial[40];
       char autor[40];
       int anyo;
};*/

typedef struct libro {
       char titulo[30];
       char editorial[40];
       char autor[40];
       int anyo;
} TLibro;


void imprime2(TLibro *libro1){
     printf("\ntitulo: %s", libro1->titulo);
     printf("\nEditorial: %s", libro1->editorial);
     printf("\nautor: %s", libro1->autor);
     printf("\nAnyo: %d\n\n", libro1->anyo);     
}

void imprime(TLibro libro1){
     printf("\ntitulo: %s", libro1.titulo);
     printf("\nEditorial: %s", libro1.editorial);
     printf("\nautor: %s", libro1.autor);
     printf("\nAnyo: %d\n\n", libro1.anyo);     
}


void leer(TLibro *libro1){
     char aux[50];
	
     fflush(stdin);	
     printf("\nTitulo: " );
     gets(libro1->titulo);
     
     printf("\nEditorial: " );
     gets(libro1->editorial);
     
     printf("\nAutor: " );
     gets(libro1->autor);
     
     printf("\nAnyo: ");
     gets(aux);
     libro1->anyo = atoi(aux);            
}

void mostrarMenu(){
     printf("\nMENU PRINCIPAL");
     printf("\n1.- Leer Libros.");
     printf("\n2.- Imprimir Libros.");
     printf("\n3.- SALIR.");
     printf("\nSu opcion es: ");
}

int main(int argc, char *argv[])
{
  int op;
  char aux[50];
  TLibro miLibro;
  
  do {
      mostrarMenu();
      fflush(stdin);
      gets(aux);
      op = atoi(aux);
         
      
      switch(op){
        case 1: leer(&miLibro);
                  break;
                  
        case 2: imprime(miLibro);
                  break;
        }
        
  } while (op != 3);

  return 0;
}

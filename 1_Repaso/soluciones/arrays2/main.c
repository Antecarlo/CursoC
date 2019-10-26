#include <stdio.h>
#include <stdlib.h>

#define NUM_COLS 5

void capicua(void){
     // Comprueba si un array es capicua:
     
     int numeros[] = {2,4,5,9,6,5,4,2};
     int N = sizeof(numeros) / sizeof(int);
     
     int i, j;
     
     for (i=0, j = N - 1; i < j ; i++, j--)
         if (numeros[i]!=numeros[j])
            break;
     
     if (i >= j)
        printf("El array es capicua ...");
     else
         printf("El array NO es capicua ...");
         
}

void ordenado(){
     // Comprueba si el array está ordenado:
     int numeros[] = {2,4,5,9,6,5,4,2};
     int N = sizeof(numeros) / sizeof(int);
     
     int i;  
     int ordenado = 1;
     
     for (i=1 ; i < N ; i++)
         if (numeros[i-1] > numeros[i]){
            ordenado = 0;
            break;          
         }
     
     if (ordenado)
        printf("Esta ordenado\n");
       
     else
        printf("No está ordenado\n");
         
                      
}

void tablaAscii(){
     int i;
     
     for (i=0; i <= 255 ; i++){
         switch(i){
                   case 7:
                   case 8:
                   case 9:
                   case 10:
                   case 13: printf("%3d: %c", i, ' ');
                            break;
                   default: printf("%3d: %c ", i,i);  
                            break;
         } 
         if (i % NUM_COLS == 0 && i) printf("\n");
     }
}     

void pruebaContinue(){
     int i;
     
     printf("\nPrueba continue\n");
     for (i=0; i < 9; i++){
         if (i==5) continue;
         printf("%d\n", i);
     }
}     

void intercambiar(int *a, int *b){
     int aux;
     
     aux = *a;
     *a = *b;
     *b = aux;
     
     printf("direcciones de a: %p, b : %p, Valores a: %d, %d", a, b, *a, *b);

}

void binario(int n){
     
     if (n <= 1)
        printf("%d",n);
     
     else {
         binario(n / 2);            
         printf("%d",n % 2);
     }
  
}


int fact(int n){
    
    if (n == 1)
       return 1;
    
    else
        return (n * fact(n - 1));
}

void upper(char *s){
    
    if (*s){       
       printf("%c",*s-32);
       upper(s+1);
    } 
}

void reserse2(char *s){
    
    if (*s){
       reserse2(s+1);
       printf("%c",*s);
    } 
}

int longitud(char *s){
    if (*s)
        return 1+longitud(s+1);            
    else
        return 0;      
}


void imprimeCadena(char *s){
     printf("\n\nEn imprimeCadena: %s %c %c", s, *s, *(s+5) );
     printf("\n\n");
}

void imprimePrefijo(char *s, int n){

     if (*s){
        if (n){
             printf("%c",*s);
             imprimePrefijo(s+1, n-1 );
        }
     }     
}

void pruebaChar(){
     char palabra[] = {"hola que tal"};
     
     printf("\n\n PruebaChar: %s", palabra); 
     imprimeCadena(palabra);   
     printf("\n\n");
     reserse2(palabra);
     printf("\n\n");
     printf("La longitud es: %d\n\n", longitud(palabra));
     printf("Imprime prefijo ");
     imprimePrefijo(palabra, 3);
     printf("\n\n");
     upper(palabra); 
}

int main(int argc, char *argv[])
{   
    tablaAscii();
    /*
  capicua();
  ordenado();
  tablaAscii();*/
  pruebaContinue();
  pruebaChar();
  
  
  // Intercambio de dos variables:
                 
  /*
  int a, b;
  
  a = 1; b = 4;
  intercambiar(&a, &b);
  printf("\ndespues de intercambiar %d %d\n", a, b);
  
  printf("\nLlamada de factorial(5): %d\n", fact(5));
  
  printf("\n\n16: ");
  binario(16);
  printf("\n\n6: ");
  binario(6);
  
  printf("\n\n");*/
          
  system("PAUSE");	
  return 0;
}

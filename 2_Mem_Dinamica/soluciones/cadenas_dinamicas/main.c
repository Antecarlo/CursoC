#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  
  char **p = NULL;
  char aux[100];
  int numero = 0;
  int i;
  
  // Leemos el número de frases que quiere teclear el usuario:
  puts("Introduzca el numero de nombres: ");
  gets(aux);
  numero = atoi(aux);
  
  // Reservamos memoria para las N frases:
  p = (char **)malloc(sizeof(char *) * numero);
  
  // Reservamos para cada frase:
  for (i=0 ; i < numero ; i++)
  {
      puts("Dame cadena: ");
      gets(aux);
      p[i] = (char *)malloc(sizeof(char) * (strlen(aux)+1) );
      strcpy(p[i], aux);  
  }
  
  // Imprimir resultados:
  puts("\nNombres leidos:");
  for (i = 0 ; i < numero ; i++)
  {
      puts(p[i]);
      free(p[i]);
  }
  free(p);
  puts("");
  
  
  return 0;
}

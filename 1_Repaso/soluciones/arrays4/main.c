#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  
  int i;
  int numeros[] = {3,4,5,7};
  printf("%d", numeros[3]);
  
  char palabra[] = "hola";
  char *palabra2 = "adios";
  
  printf("\npalabra1: %s palabra2: %s %c\n\n\n",palabra, palabra2,*palabra2);
  
  
  printf("%s %c\n\n\n", *argv, **argv);
  
  for (i=0 ; i < argc; i++)
      printf("%s\n",argv[i]);
  	
  return 0;
}

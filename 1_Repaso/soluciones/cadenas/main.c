#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  
  char destino[50];
  
  strcpy(destino, "hola que taL");
  //destino[4]='\0';
  
  printf("\'%s\'", destino);
  
  printf("\nLongitud: %ld", strlen(destino));
  
  strncat(destino, "mas datos",3);
  
  printf("\n\'%s\'", destino);
  
  printf("\nvalor strcmp %d", strcmp("hola","HOLA"));
  
  printf("\nvalor strncmp %d", strncmp("hola","hola HOLA",4));
  
  printf("\nvalor strcasecmp %d", strcasecmp("hola","HOLA"));

  printf("\nvalor strncasecmp %d", strncasecmp("hola 123","HOLA 456", 4));
  printf("\nvalor strncasecmp %d", strncasecmp("hola 123","HOLA 456", 7));

  printf("\nstrstr %s", strstr(" .... (hola) ...","hola"));
    
  printf("\n\n");
 
  return 0;
}

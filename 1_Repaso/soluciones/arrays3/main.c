#include <stdio.h>
#include <stdlib.h>



void leer(){
     printf("pulsa una tecla : " );
     int c = getchar();
     
     printf("\n%c %d\n\n", c,c);
}

void imprime(int *p){
     int i, j;
     
     for (i=0; i < 6; i++)
             printf("%d\t", p[i]);
         printf("\n");
     
}
    
void parametros(int n, char **s){
     int i;
     
     printf("\n%s %c\n",*s,**s);
     
     for (i=0; i < n; i++)
         printf("%d: %s\n", i, s[i]);
}

int main(int argc, char *argv[])
{
  int vector[]={1,2,3,4,5,6};
  
  leer();
  imprime(vector);
  parametros(argc, argv);
  
  return 0;
}




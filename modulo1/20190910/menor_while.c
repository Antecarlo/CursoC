/*
Modulo 2

Contar los numeros que ha tecleado el usuario y devolver el menor. Con un bucle while
*/

//Ficheros de encabezado
#include<stdio.h>

int main(){
	
	int numero;
	int cont=0;
	int menor;

	while(numero!=0){
		printf("\nDame un numero: \n");
		fflush(stdin);
		scanf("%d",&numero);

		if(cont==0){
			//Primera vuelta del bucle
			menor=numero;

		}else{		
			if(numero<menor && numero!=0)
				menor=numero;
		}
		if(numero)//Si numero es distinto de cero: if(numero!=0)
			cont++;
	}
	printf("Has tecleado %d numeros\n",cont);
	if(cont>0) printf("El numero menor es: %d\n",menor);

}

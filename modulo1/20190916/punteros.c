/*
Punteros: definicion, operadores, operaciones
*/

#include <stdio.h>

void intercambiar(int *n1,int *n2){
	
	int aux=*n2;
	*n2=*n1;
	*n1=aux;	
}

int main(){

	int n1=1,n2=2;

	//Declaracion de punteros
	int *ptr;

	//Con inicializacion:
	int *p=0;
	int *p2=NULL; 

	char *s=NULL;

	//Asociar la dir. de una variable a un puntero:
	int numero=99;

	//Extraer la direccion de memoria de numero y se almacena en el puntero:
	ptr=&numero;

	// Imprimir la direccion y el contenido del puntero:
	printf("\nDir %p y el contenido: %d\n",ptr,*ptr);

	//Modificar numero a partir de puntero:
	(*ptr)++;

	printf("\nNumero: %d\n",numero);

	numero=200;
	printf("\nContenido de ptr: %d\n",*ptr);
	/*
	puts("\nTeclear numero:");
	scanf("%d",&numero);
	*/

	printf("\nNumero leido: %d\n",numero);

	//Intercambiar dos variables
	
	int n3=n1;
	printf("Valores iniciales n1:%d , n2:%d",n1,n2);
	n1=n2;
	n2=n3;
	printf("\nValores finales n1:%d , n2:%d\n",n1,n2);

	//Intercambiar dos variables con funcion
	intercambiar(&n1,&n2);
	printf("\nValores tras usar la función intercambiar n1:%d , n2:%d\n",n1,n2);

	int numeros[]={7,6,5,543,1,2,3};
	printf("\n%d",*numeros);
	printf("\n%d\n",*(numeros+3));



}

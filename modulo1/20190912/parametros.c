#include<time.h>
#include<stdlib.h>
#include<stdio.h>


/*
Modulo 1

Tipos de parametros: por valor o copia y por puntero.

*/

void funcion1(int a){
	//Paso por el param o por copia.
	a++;
	printf("\nDentro de funcion: %d",a);
}

void imprimir(int *arr,int n){
	int i;
	
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	puts("");
}

void imprimirConDirecciones(int *arr,int n){
	int i;
	
	for(i=0;i<n;i++)
		printf("\n%d %d %p %d",i,arr[i],&arr[i],*(arr+i));
	puts("");
}

void farray1(int *arr,int n){
	arr[0]++;
}

void farray2(int arr[],int n){
	arr[1]++;
}

void funcion2 (int *pa){
	// La funcion recibe un puntero a int, es la direccion de una variable

	// Con el operador * delante de un puntero accede a la variable original (la de main en este caso).
	(*pa)++;
}

void suma_resta(int *suma, int *resta, int c, int d){
	*suma=c+d;
	*resta=c-d;
}


int main(){
	int n=10;
	int array[]={1,2,3,4,5};

	printf("\nAntes de llamar: %d",n);
	funcion1(n);
	printf("\nDespues de llamar: %d\n",n);

	imprimir(array,5);
	farray1(array,5);
	farray2(array,5);
	imprimir(array,5);

	printf("\nPruebas con funcion2");
	funcion2(&n);
	printf("\nDespues de llamar a la funcion2: %d\n",n);

	printf("Size of int  en bytes: %ld\n",sizeof(int));

	imprimirConDirecciones(array,5);
	puts("");

	int suma;
	int resta;
	suma_resta(&suma,&resta,5,4);
	printf("La suma de 5 y 4 es %d y la resta es %d\n",suma,resta);
}

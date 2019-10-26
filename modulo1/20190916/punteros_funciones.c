/*
Punteros a funcion
*/

#include <stdio.h>

int suma(int a,int b){
	return a+b;
}

int resta(int a,int b){
	return a-b;
}

void prueba(char *s, double numero){
	printf("\nEn prueba: %s %g",s,numero);
}

void ejecutar(int num1,int num2,int (*ptr)(int,int)){

	printf("\nResultado es: %d\n",ptr(num1,num2));
}

void intercambiar(int *n1,int *n2){
	
	int aux=*n2;
	*n2=*n1;
	*n1=aux;	
}

void ordenar(int *numeros, int n,int(*ptr)(int,int)){
	int i,j;

	for (i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(ptr(numeros[i],numeros[j]))
				intercambiar(&numeros[i],&numeros[j]);
}

int asc(int a, int b){
	if(a<b) return 1;
	else return 0;
}

int des(int a, int b){
	if(a>b) return 1;
	else return 0;
}

void imprimir(int *numeros, int n){
	int i;

	for (i=0;i<n;i++)
		printf("%d ",numeros[i]);
	puts("");
}


int main(){
	//Definir un puntero a una funcion:
	//1. Mirar el prototipo de la funcion: int suma(int,int);

	// Indica que la funcion recibe 2 enteros y devuelve otro entero
	int (*ptr)(int,int);

	// Copiar el nombre de la funcion en el puntero:
	ptr=suma; //El nombre de la funcion es un puntero a esa subrutina

	//Ejecutar la funcion a traves de un puntero
	printf("\nResultado suma: %d\n",ptr(3,5));

	ptr=resta;
	printf("\nResultado resta: %d\n",ptr(3,5));

	void (*ptr2)(char *,double);
	ptr2=prueba;

	char a[]={"abcd"};
	ptr2(a,54.6);
	// Otra opcion ptr2("abcd",54.6);

	//Otro ejemplo
	printf("\n\nEjecutar la funcion a traves de puntero en otra funcion:\n");
	ejecutar(8,9,suma);
	ejecutar(7,3,resta);

	int numeros[]={1,6,3,2,7,8,3,2,3,6,7};
	int n=sizeof(numeros)/sizeof(int);
	ordenar(numeros,n,asc);
	imprimir(numeros,n);
	ordenar(numeros,n,des);
	imprimir(numeros,n);
	

}

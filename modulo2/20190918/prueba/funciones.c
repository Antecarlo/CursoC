/*

Modulo 2
Funciones de prueba:

*/

#include<stdio.h>

int menor2(int a, int b){
	return(a<b)?a:b;
}

int menor3(int a,int b, int c){
	
	return menor2(menor2(a,b),c);
}

int suma(int a,int b){

	return a+b;
}

int resta(int a, int b){
	int aux=a-b;
	return aux;
}

int main(){

	int s,r;
	int num1, num2;	

	puts("Num1: ");
	fflush(stdin);
	scanf("%d",&num1);

	puts("Num2: ");
	fflush(stdin);
	scanf("%d",&num2);

	s=suma(num1,num2);
	printf("\nSuma: %d",s);

	r=resta(num1,num2);
	printf("\nResta: %d\n\n",r);

	int nu1;
	int nu2;
	int nu3;

	puts("3 numeros para obtener el menor: ");
	fflush(stdin);
	scanf("%d%d%d",&nu1,&nu2,&nu3);	

	printf("\nEl numero menor es %d\n",menor3(nu1,nu2,nu3));

	int i;
	int numeros[]={6,8,5,4,3,31,3,8};
	int menor=numeros[0];

	for (i=1;i<(sizeof(numeros)/sizeof(int));i++){
		menor=menor2(menor,numeros[i]);		
	}
	printf("El numero menor del array es: %d\n",menor);


}

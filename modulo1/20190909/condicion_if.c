/*
Condicionales if y opeardores relacionales
*/

#include <stdio.h>

int main(){
	
	int num1, num2, menor;

	// Imprimir el numero menor:
	num1=8;
	num2=9;


	if(num1==num2){
		menor=num1;
		printf("Ambos numeros son iguales");
	}
	else if(num1<num2){
		menor=num1;
		printf("El menor es:%d\n",menor);
	}
	else{
		menor=num2;
		printf("El menor es:%d\n",menor);
	}

	puts(""); //Sacar string por pantalla
}

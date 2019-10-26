/*

Variables static, globales, register

*/

#include<stdio.h>

// Esta fuera de todas las funciones -> es global
int global=0;


void funcion1(){
	int i=0;
	global +=100;

	i++;
	printf("\nfuncion1 i=%d",i);
}

void funcion2(){
	static int i=0;

	i++;
	printf("\nfuncion2 i=%d",i);
}


int main(){
	int i;
	for (i=0;i<5;i++)
		funcion1();

	puts("");

	for (i=0;i<5;i++)
		funcion2();
	puts("");

}

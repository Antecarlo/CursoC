#include<time.h>
#include<stdlib.h>
#include<stdio.h>


/*
Modulo 1

Recursividad

Factorial iterativo

5!=5x4x3x2x1

Factorial recursivo
!3=3x2!
2!=2x1!
1!=1

n!=nx(n-1)!

*/

int fact(int n){
	if(n==1 || n==0)return 1;
	else return n*fact(n-1);	
}

void bin(int n){
	if(n<2){
		printf("%d",n);	
	}
	else{
		//Antes de la recursividad
		bin(n/2);
		//Despues de la recursividad
		printf("%d",n%2);
	}	
}


int contcif(int n,int cont){
	int cont2=cont;
	if(n==0){
		printf("El numero tiene 0 cifra(s)");
	}
	if else(n<10){
		cont2++;
		printf("El numero tiene %d cifra(s)",cont2);
	}
	else{
		cont2++;
		contcif(n/10,cont2);		
	}
	return cont2;
}


int cifras(int n){
	if (n==0){
		return 0;
	}
	else{
		return 1+cifras(n/10);		
	}
}


int main(){
	bin(8);
	puts("");
	int cont=cifras(15434454);
	printf("El numero tiene %d cifra(s)",cont);
	puts("");
}

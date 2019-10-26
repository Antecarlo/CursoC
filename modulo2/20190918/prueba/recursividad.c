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
		bin(n/2);
		printf("%d",n%2);
	}
}


int main(){

}

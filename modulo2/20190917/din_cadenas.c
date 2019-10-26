/*
Modulo 2

Memoria dinámica

Ejemplo de array de chars, OJO siempre se reserva para 1 mas por el \0

*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>


int main(){

	char * alf;
	char i;
	int k;

	//Cargar el alfabeto:
	int n='Z'-'A'+1+1; //+1 extra por el \0
	
	alf=(char *)malloc(sizeof(char)*n);

	if (alf==NULL){

		puts("\nThere is no available memory");
		exit(-1);
	}

	for(i='A';i<='Z';i++){
		//alf[i-'A']=char(i);
		k=(int)i-'A';
		alf[k]=i;
	}
	alf[k+1]='\0';

	//Print 
	puts(alf);

	//Free memory
	free(alf);
	alf=NULL;
}

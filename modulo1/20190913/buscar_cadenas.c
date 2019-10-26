/*
Modulo 1

Localizar subcadenas dentro de cadenas y chars dentro de cadenas 
Funciones strstr y strchr

*/

#include<string.h>
#include<stdio.h>


int main(){
	/*
	char s[]={"Hola que tal"};
	char *ptr;

	ptr=strchr(s,'q');
	if(ptr==NULL)
		puts("\nNo existe el char");
	else
		printf("\nEsta en la posicion: %ld",ptr-s);
	puts("");
	*/

	char texto[]={"hola que tal el fin de semana"};
	// Imprimir todas las posiciones donde aparece la a y sustituirlas por una X
	// hacerlo con una copia de la cadena.

	char txt[50];
	strcpy(txt,texto);
	char *pos;

	//Mi version
	char sus='X';
	int i=1;

	pos=strchr(texto,'a');

	while(pos!=NULL){

		if(i!=0)txt[pos-txt]=sus;
		else{
			txt[pos-texto]=sus;
			i==0;
		}
		//printf("\nTenemos a en la posicion %ld",pos-txt);
		puts(txt);
		pos=strchr(txt,'a');
	}

	// Version de Antonio
	/*
	do{
		ptr=strchr(texto,'a');
		if(ptr!=NULL){
			pos=ptr-texto;
			txt[pos]='x';
			printf("\npos=%ld",pos);
			i+=(pos+1);
		}
	}while(ptr!=NULL);
	*/

	puts(texto);
	puts(txt);
}


/*
Modulo 1

Cadenas de caracteres
*/

#include<string.h>
#include<stdio.h>

void imprimir(char *cadena){
	int i;
	
	//for(i=0;i<strlen(cadena);i++)
	//for(i=0;cadena[i];i++)
	for(i=0;cadena[i]!='\0';i++)
		printf("%d %c %c %p %p\n",i,cadena[i],*(cadena+i),&cadena[i],cadena+i);
}


int main(){
	char nombre[]={"Jorge"};
	char nombre2[]={'J','o','r','g','e','\0'};
	char aux[10];

	//Imprimir cadenas:
	printf("\nNombre: %s\n",nombre);
	puts(nombre);
	
	//Leer cadenas:
	/*
	puts("Dame nombre:");
	fflush(stdin);
	scanf("%s",aux); //&aux
	puts(aux);
	*/

	//gets
	/*
	puts("Dame nombre:");
	fflush(stdin);
	gets(aux);
	puts(aux);
	*/

	//fgets
	puts("Nombre:");
	fgets(aux,10,stdin); //Leer de teclado
	puts(aux);

	// Truncar una cadena:
	aux[3]='\0';
	puts(aux);
	
	imprimir(nombre);
}





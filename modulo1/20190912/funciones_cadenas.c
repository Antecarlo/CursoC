/*
Modulo 1

Funciones de cadenas: string.h
*/

#include<string.h>
#include<stdio.h>

void strrev(char *s){

	puts(s);
	if (*s){ // Igual que if(*s!='\0')
		strrev(s+1);
		printf("%c",*s);
	}
}

int len(char *s){
	int length;

	if(*s){
		length=len(s+1);
		return 1+length;
	}
	else return 0;
}




int main(){
	char s[]={"hola que tal"};
	char str[50];
	char s2[]={"Hola"};

	// Comparacion de cadenas: //NO HACER: if(s2=="hola")
	if(strcmp(s2,"hola")==0)
		puts("iguales");
	else
		puts("distintas");

	//No tiene en cuenta mayusculas y minusculas:
	if (strcasecmp(s2,"hola")==0)puts("iguales");
	else puts("distintas");

	// Comparar los n primeros caracteres
	if(strncmp(s2,"hola",4)==0)puts("iguales");
	else puts("distintas");

	// Compara los n primeros caracteres sin tener en cuenta mayusculas y minusculas
	if(strncasecmp(s2,"hola",4)==0)puts("iguales");
	else puts("distintas");

	// Copiar cadenas // NO HACER s='adios'
	strcpy(s,"adios");
	puts(s);
	
	// Concatenar cadenas: // NO HACER s+="otra cadena"
	strcat(s,"otra cadena");
	puts(s);

	// Imprimir al reves:
	strrev("Hola que tal la semana");
	puts("");

	// Calcular longitud de una cadena de caracteres

	int numLen=len("123456789");
	printf("\n%d\n",numLen);

}

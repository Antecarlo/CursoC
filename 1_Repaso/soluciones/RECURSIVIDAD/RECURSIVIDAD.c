// RECURSIVIDAD.cpp : Defines the entry point for the console application.
//
#include <stdio.h>


void binario(int numero){
	// Imprime por pantalla un número en binario.

	if (numero < 2)
		printf("%d",numero);

	else {
		binario(numero / 2);
		printf("%d", numero % 2);
	}

}


void cambioDeBase(int numero, int base){
	// Imprime por pantalla el resultado de cambiar de base el número recibido por argumento:
	
	if (numero < base)
		printf("%d", numero);

	else {
		cambioDeBase(numero / base, base);
		printf("%d", numero % base);
	}
}


void printer(const char *s){
	// Imprime de forma recursiva la cadena pasada por argumento:

	if (*s){
		printf("%c",*s);
		printer(s+1);
	}

}


int strlen2(const char *s){
	// Devuelve la longitud de la cadena.
	return ( (!*s) ? 0 : 1 + strlen2(s+1));
}



int strcmp2(const char *s1, const char *s2){

	if (s1 == NULL && s2 == NULL)
		return 0;

	else if (*s1 && *s2){
		
		if (*s1 == *s2)
			return(strcmp2(s1+1, s2+1));

		else 
			return(*s1 - *s2);


	} else if (s1 == NULL)
		return(*s2);

	else 
		return(*s1);
}
			

void reverse2(const char *s){
	if (*s){
		reverse2(s + 1);
		printf("%c", *s);
	}
}


void putsn(const char *s, int n){
	
	if (*s)
		if (n){

			printf("%c", *s);
			putsn(s + 1, n - 1);
		}
}



int main(int argc, char* argv[]){
	int numero;

	// Prueba de la función Binario:
	for (numero = 0 ; numero < 256 ; numero++){
		printf("%d = ", numero);
		binario(numero);
		printf("\n");
	}


	// Pruebas de la función cambiarDeBase:
	printf("\n\nEl número 125 -> ");
	cambioDeBase(125, 8);
	printf("\n\nEl número 44 -> ");
	cambioDeBase(44, 4);
	printf("\n\n");


	// Prueba de la función printer:
	printer("Hola, esta es la frase de prueba");
	printf("\n\n");


	// Prueba de la función srtlen:
	printf("\n\nLa longitud de esta cadena es: %d\n\n", strlen2("la longitud de esta cadena es"));

	
	// Prueba de la función strcmp:
	printf("\n\nEl resultado de comparar dos cadenas es %d:\n\n", strcmp2("Hola", "H") );


	// Prueba de la función reverse:
	reverse2("Hola que tal, esta es la frase de prueba");
	printf("\n\n");


	// Prueba de la función putsn:
	putsn("Hola que tal, esta es la frase de prueba", 15);
	printf("\n\n");

	return 0;
}


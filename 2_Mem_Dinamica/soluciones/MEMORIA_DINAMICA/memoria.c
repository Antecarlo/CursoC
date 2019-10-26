
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1024



int main(){
	char **frases = NULL;
	char frase[MAX];
	char **aux = NULL;
	int n = 0, i = 0, lon = 0;
	char resp, c;
	FILE *f;
	
	// Cargar las frases en memoria:
	do {
		// Leer la frase de Teclado.
		printf("\nIntroduce una frase: ");				
		gets(frase);
		lon=strlen(frase);
	
		// Crear un número de frases:
		
		// Crea hueco para una nueva frase:
		aux = (char **)malloc( (n + 1) * sizeof(char *));

		// Copiar los datos al nuevo array.
		for (i = 0 ; i < n ; i++ )
			aux[i]=frases[i];
		
		// Liberar la memoria antigua:
		free(frases);

		// Reasignar los punteros:
		frases = aux;

		// Reserve memoria para la nueva frase, la longitud de la cadena+1. 
		aux[n] = (char *)malloc((lon+1)*sizeof(char));
		strcpy(aux[n], frase);
		n++;

		printf("Desea continuar s/n?");
		resp = toupper(getchar());
		while ((c = getchar()) != '\n' && c != EOF);

	} while (resp != 'N');


	
	// Listar todas las frases creadas:
	for ( i = 0 ; i < n ; i++)
		printf("\n%s", frases[i]);
	printf("\n");


	// Liberar la información de las frases:
	for ( i = 0 ; i < n ; i++)
		free(frases[i]);

	free(frases);	
}


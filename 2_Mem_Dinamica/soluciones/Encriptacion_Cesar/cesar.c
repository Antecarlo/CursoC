#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define K 5

char *generarAlf(char *alf){
	char c;
	int i = 0;
	int num=('Z'-'A'+1)*2; // 2 abc completos
	num += 10 + 1 + 1; // 10 digitos, 1 espacio,1 \0
	// Reservar:
	alf = (char *) malloc(sizeof(char) * num);
	
	for (c = 'A' ; c <= 'Z' ; c++, i+=2){
		alf[i] = c;
		alf[i+1] = c+32;
	}
	
	for (c = '0' ; c <= '9' ; c++, i++)
		alf[i] = c;
		
	alf[i++] = ' ';
	alf[i] = '\0';
	return alf;	
}

int codificaLetra(char *alf, char letra){
	char *aux = strchr(alf, letra);
	
	return aux - alf;
}

char decodificarLetra(char *alf, int pos){
	return alf[pos];
}

int *codificarCadena(char *alf, char *mensaje){
	int *ptr;
	int i;
	int n = strlen(mensaje);
	// Reservar enteros tantos como letras del mensaje
	ptr = (int *) malloc(sizeof(int)*n);
	// Cada letra se codifica en un numero:
	for (i = 0 ; i < n ; i++)
		ptr[i] = codificaLetra(alf, mensaje[i]);
	
	// Retornar el array:
	return ptr;
}

char *decodificarCadena(char *alf, int *pos, int n){
	// OJO +1 por el \0
	int i;
	char *s = (char *) malloc(sizeof(char)*(n+1));
	for (i=0 ; i < n ; i++)
		s[i] = decodificarLetra(alf, pos[i]);
	s[i] = '\0';
	return s;
}

char *cesar(char *mensaje, char *alf, int k){
	// Devuelve la cadena encriptada:
	int *pos = codificarCadena(alf, mensaje);
	int n = strlen(mensaje);
	int i;
	for (i=0 ; i < n ; i++)
		pos[i] = (pos[i] + k) % strlen(alf);
		
	char *resul = decodificarCadena(alf, pos, n);
	free(pos);
	return resul;
}

char *descifrarCesar(char *mensaje, char *alf, int k){
	int *pos = codificarCadena(alf, mensaje);
	int n = strlen(mensaje);
	char *resul = (char *) malloc(sizeof(char)*(n+1));
	int i, aux;
	for (i=0 ; i < n ; i++){
		if ((pos[i] - k) < 0)
			aux = pos[i]-k+strlen(alf);
		else
			aux = pos[i] - k;
			
		resul[i] =	decodificarLetra(alf, aux);
	}
	resul[i] = '\0';
	return resul;
}

char *descifrarCesar2(char *mensaje, char *alf, int k){
	return cesar(mensaje, alf, -k);
}

int main(){
	char *alf, *encrip, *origen;
	char mensaje[1024];
	alf = generarAlf(alf);
	
	printf("INTRODUCE MENSAJE:");
	gets(mensaje);
	
	encrip = cesar(mensaje, alf, K);
	puts(encrip);
	origen = descifrarCesar(encrip, alf, K);
	puts(origen);
	
	free(alf);
	free(encrip);
	free(origen);
}

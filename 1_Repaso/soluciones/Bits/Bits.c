// Tratamiento de Bits:

#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAXBITS 80
 

// Definir un alias de tipo
typedef unsigned char Byte;

void putBit(Byte *byte, int pos, int valor){
	if (pos < 0 || pos > 7) return;
	
	if (valor)
		// El bit a 1: OR
		*byte = *byte | (1<<pos);
		
	else
		// El bit a 0: AND
		*byte = *byte & ~(1<<pos);
}

int getBit(Byte byte, int pos){
	
	if (pos < 0 || pos > 7) return 0;
	
	return ((byte & (1<<pos))>0);
}

void imprimir(Byte b){
	int i;
	
	for(i = 7 ; i >= 0 ; i--)
		printf("%d", getBit(b, i));
	
}

void atob(Byte *arrayBits, char *trama, int nroBits){
	// Cada char de la trama representa 1 bit. Se pasa
	// al array de bits.
	int i;
	int valorBit, numByte, numBit;
	
	for (i = 0; i < nroBits ; i++){
		// Calcular el byte y bit y llamar a la funcion
		// putBit
		valorBit = trama[i] - '0'; // Tener el 0 o 1 como int
		numByte = i / 8;
		numBit = i % 8;
		
		putBit(&arrayBits[numByte], 7-numBit, valorBit);
	}
}

void imprimirArray(Byte *arrayBits, int nroBits){
	int i;
	int numBytes = nroBits / 8;
	
	if (nroBits % 8 != 0)
		numBytes++;
	
	for (i = 0 ; i < numBytes ; i++){
		imprimir(arrayBits[i]);
		printf(" ");
	}
	puts("");
}

void abrirHueco(Byte *arraybits, int posAbrir,int *nroBits){
	int i;
	
	for (i = *nroBits+1 ; i > posAbrir; i--){
		
	}
	
}
void potencias2(Byte *arraybits, int *nroBits){
	int i;
	int val;
	int posAbrir;
	
	for (i = 0 ; i < *nroBits ; i++){		
		val = (int)pow(2.0, i);
		printf("%d ", val);
		
		if (val > *nroBits) break;
		
		posAbrir = val-1;
		abrirHueco(arraybits, posAbrir, nroBits);		
	}	
}

int main(){
	char s[MAXBITS];
	Byte arraybits[MAXBITS/8+2]={0x00};
	int nroBits;	
	printf("Introduzca trama de bits:\n");
	gets(s);
	nroBits = strlen(s);
	atob(arraybits, s, nroBits);
	imprimirArray(arraybits, nroBits);
	potencias2(arraybits, &nroBits);
	puts("");
}

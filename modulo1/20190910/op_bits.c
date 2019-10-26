/*
Modulo 2

Operadores logicos con bits

0: 0000
1: 0001
2: 0010
3: 0011
4: 0100
5: 0101
6: 0110
7: 0111
8: 1000
9: 1001
10: 1010  A
11: 1011  B
12: 1100  C
13: 1101  D
14: 1110  E
15: 1111  F

Rotacion de bits:

<<
1111 0010
<< 2

1100 1000
Equivale a multiplicar por 2² 

*/

//Ficheros de encabezado
#include<stdio.h>

int main(){

	unsigned char num1=0xF2; //1111 0010
	unsigned char num2=0x4C; //0100 1100
	// resultado 0100 0000 = 0x40
	printf("%x\n",num1&num2);

	printf("AND %x\n", num1 & num2);
	printf("OR %x\n",num1 | num2);
	printf("XOR %x\n",num1 ^ num2);

	num1=2;
	num1 <<=2; // num1=num1<<2
	printf("\nnum1: %d",num1); //8
	num1>>=1; //num1=num1 >>1;
	printf("\nnum1: %d\n",num1); //4

	num1=1;
	printf("\nnum1: %d",~num1); //complemento a uno
	
}

/*
Punteros constantes y punteros a constantes
*/

#include<stdio.h>

int main(){
	
	char path2[100]={"/docs/cv.pdf"}; //Si la ruta no cambia mejor definirlo como const char *
	const char *path="/docs/cv.pdf";
	puts(path);
	//path[0]='A'; ERROR: solo lectura
	puts("");	

	int x=100,y=200;
	int x2=23;
	int * const px=&x;
	
	*px=150;
	printf("\nx=%d\n",x);

	//Todo constante: el puntero y el contenido
	const char * const nombre ="Julia";

	int * const px1=&x;
	const int const *px2=&x;
	px2=&x2;

	
		
}

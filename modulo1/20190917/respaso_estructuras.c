/*

	Repaso de estructuras:

*/

#include<stdio.h>
#include<math.h>

typedef struct {

	int x;
	int y;

} TPunto2D;


void imprimir(TPunto2D);
TPunto2D sumar(TPunto2D,TPunto2D);
float distancia(TPunto2D,TPunto2D); //raiz_cuadrada ((x2-x1)^2 + (y2-y1)^2): sqrt(), pow(b,exp)
TPunto2D masCercano(TPunto2D *,int);
int minimo(float *,int);

int main(){

	TPunto2D nube[]={{1,4},{-7,0},{5,5},{8,8},{5,6},{5,1},{9,8},{1,2}};

	int i;
	int n;
	puts("Nube de puntos:");
	for(i=0;i<8;i++)
		imprimir(nube[i]);
	puts("");

	//Sumar
	TPunto2D p3=sumar(nube[0],nube[7]);
	printf("\nSuma de nube[0]:[%d,%d] y nube[7]:[%d,%d] --> p3: [%d,%d]\n\n",nube[0].x,nube[0].y,nube[7].x,nube[7].y,p3.x,p3.y);
	puts("");

	//Distancia
	float dist=distancia(nube[1],nube[2]);
	printf("Distancia: %f",dist);
	puts("");

	//Mas cercano
	n=sizeof(nube)/sizeof(nube[0]);
	TPunto2D mc=masCercano(nube,n);
	printf("\nPunto mas cercano:");
	imprimir(mc);
	puts("");


}

void imprimir(TPunto2D p){
	printf("\n[%d,%d]",p.x,p.y);
}

TPunto2D sumar(TPunto2D p1,TPunto2D p2){
	TPunto2D p3={(p1.x+p2.x),(p1.y+p2.y)};
	return p3;
}

float distancia(TPunto2D p1,TPunto2D p2){
	return sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
}

TPunto2D masCercano(TPunto2D *nube,int n){
	float distancias[n];
	int i;
	TPunto2D puntoDist={0,0};

	for(i=0;i<n;i++){
		distancias[i]=distancia(nube[i],puntoDist);
	}
	return nube[minimo(distancias,n)];
}

int minimo(float *distancias,int n){
	int i;
	int min=0;
	
	for(i=1;i<n;i++){
		if(distancias[i]<distancias[i-1])min=i;
	}
	return min;

}


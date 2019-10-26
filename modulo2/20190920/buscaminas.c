/*

Modulo 2
Buscaminas

Edicion

20/09/2019
08:09

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define BOMBA 98

//////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct{
	int fila,col;
} TCoor;

typedef struct nodo{
	TCoor coor;
	struct nodo * sig; //Puntero al siguiente nodo

} TNodo; //Alias

//////////////////////////////////////////////////////////////////////////////////////////////////////

TNodo * insertarCoordenada(TNodo * lista, TCoor nCoor){

	TNodo * nuevo;

	//Crear el nodo:
	nuevo = (TNodo *) malloc(sizeof(TNodo));
	
	//Copiar la informacion
	nuevo->coor=nCoor;
	nuevo->sig=NULL;

	//Enganchar con la lista
	nuevo->sig = lista;
	lista=nuevo;

	return lista;
	
}

TCoor generarCoordenadas(int tope){

	TCoor coor;
	coor.fila=rand()%tope;
	coor.col=rand()%tope;

	return coor;
}

void imprimir(TNodo * lista){

	TNodo * aux=lista;
	printf("Bombas:\t");
	
	while (aux !=NULL){
		printf("(%d,%d)\t",(aux->coor).fila,(aux->coor).col);
		aux=aux->sig;
	}
	printf("\n\n\n");
}

int existeCoor(TNodo * lista,TCoor nCoor){
	//Devuelve 1 si el numero existe en la lista, 0 si no existe
	TNodo * aux=lista;
	
	while (aux !=NULL){
		if((aux->coor).fila==nCoor.fila && (aux->coor).col==nCoor.col)
			return 1;
		aux=aux->sig;
	}
	return 0;
}

TNodo * generarListaCoordenadas(TNodo *lista, int numCoordenadas, int tope){

	TCoor nCoor;
	int i;

	for(i=0;i<numCoordenadas;i++){
		do{
			nCoor=generarCoordenadas(tope);

		}while(existeCoor(lista,nCoor)!=0);

	lista=insertarCoordenada(lista,nCoor);
	}
	
	return lista;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////

// Con triple puntero
void inicializarTablero (int n,float *** matriz){

	int i,j;
	float k=1.0;
	float ** aux;
	
	aux=(float **)malloc(sizeof(float *)*n);

	for(i=0;i<n;i++){
		aux[i]=(float *)malloc(sizeof(float)*n);
		for(j=0;j<n;j++,k++)
			aux[i][j]=0;
	}	
	* matriz=aux;
}

void imprimirTablero(int n, float ** tablero){
	
	int i,j;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			if(tablero[i][j]==BOMBA) printf("%4c\t",'B');
			else printf("%4g\t",tablero[i][j]);
		printf("\n\n");
	}	
}

void imprimirTableroUser(int n, float ** tableroUser,float ** tablero){
	
	int i,j;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			if(tableroUser[i][j]==0) printf("%4c\t",'#');
			else printf("%4g\t",tableroUser[i][j]);
		printf("\n\n");
	}	
}

float ** liberarTablero(int n,float ** matriz){
	int i;

	for(i=0;i<n;i++){
		free(matriz[i]);
		matriz[i]=NULL;
	}

	free(matriz);
	return NULL;
}

void liberarBombas(TNodo ** lista){
	//Borrar todos los elementos de la lista
	TNodo * aux;

	while(* lista !=NULL){
		aux= * lista;
		* lista = (* lista)->sig;
		free(aux);
		aux=NULL;
	}
}

void colocarBombas(TNodo * listaBombas,float ** tablero){

	TNodo * aux=listaBombas;
	float a,b;

	if(listaBombas!=NULL){

		while(aux!=NULL){
			a=(aux->coor).fila;
			b=(aux->coor).col;
			tablero[(int)a][(int)b]=(int)'b';
			aux=aux->sig;
		}

	}else printf("La lista de bombas esta vacia");
	
}

TCoor calcularAdyacente(TCoor coordenada, int i,int j){
	TCoor aux;

	aux.fila=coordenada.fila+i;
	aux.col=coordenada.col+j;

	return aux;
}

int esBomba(TCoor c, float ** tablero){
	return tablero[c.fila][c.col]==BOMBA;
}


int estaDentro(TCoor c, int nTablero){
	return((c.fila>= 0) && (c.fila<nTablero))&&((c.col>=0) && (c.col<nTablero));
}

void recuentoAdyacentesBomba(TCoor bomba,float ** tablero,int nTablero){
	int i,j;
	TCoor adyacente;

	for (i=-1;i<=1;i++){
		for(j=-1;j<=1;j++){
			if(i==0 && j==0) continue;
			adyacente=calcularAdyacente(bomba,i,j);
			//printf("\n%d",estaDentro(adyacente,nTablero));
			//printf("\nAdyacente %d:%d, i:j %d:%d",adyacente.fila,adyacente.col,i,j);
			if(estaDentro(adyacente,nTablero) && !esBomba(adyacente,tablero)){
				tablero[adyacente.fila][adyacente.col]++;
			}
		}
	}
}

void recuentoCasillas(TNodo * listaBombas, float ** tablero,int nTablero){

	TNodo * aux=listaBombas;

		while(aux!=NULL){
			recuentoAdyacentesBomba(aux->coor, tablero, nTablero);
			aux=aux->sig;
		}
}

int analizarCoordenada(float ** tablero,float ** tableroUser,int nTablero,int fila,int col){
	
	TCoor aux={fila,col};

	if(estaDentro(aux,nTablero) && !esBomba(aux,tablero)){
		tableroUser[fila][col]=tablero[fila][col];
		return 1;
	}else if(estaDentro(aux,nTablero) && esBomba(aux,tablero)){
		puts("GAME OVER");
		return 0;
	}else{
		puts("Las coordenadas introducidas no estan en el tablero");
		return 1;
	}
	
}

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//
//$$$$$$                                                                                      $$$$$$//
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//


int main(){

	srand(time(NULL));

	float ** tablero = NULL; //Inicializamos el doble puntero
	float ** tableroUser = NULL; //Inicializamos el doble puntero
	TNodo * listaBombas=NULL; //Inicializamos la lista de bombas
	int nTablero;
	int nBombas;

	//1. Pedir tamanyo del tablero
	puts("\nEntradas del tablero nxn:");
	fflush(stdin);
	scanf("%d",&nTablero);

	//2. Construir tablero e inicializar a cero
	inicializarTablero(nTablero,&tablero);
	inicializarTablero(nTablero,&tableroUser);

	//3. Pedir numero de bombas
	puts("\nBombas:");
	fflush(stdin);
	scanf("%d",&nBombas);

	printf("\n\n");

	//4. Generar numero de bombas
	listaBombas = generarListaCoordenadas(listaBombas,nBombas,nTablero);
	imprimir(listaBombas);

	//5. Colocar bombas en el tablero
	colocarBombas(listaBombas,tablero);

	//6. Recuento de casillas adyacentes a una bomba
	recuentoCasillas(listaBombas, tablero, nTablero);

	//7. Imprimir tablero
	int fila,col;
	int continuar=1;
	
	do{
		puts("Tablero bombas:");
		imprimirTablero(nTablero,tablero);
		puts("Tablero user:");
		imprimirTableroUser(nTablero,tableroUser,tablero);

		puts("Coordenadas:");
		fflush(stdin);
		scanf("%d%d",&fila,&col);
		continuar=analizarCoordenada(tablero, tableroUser, nTablero, fila,col);

	}while(continuar==1);

	//Liberar tablero
	tablero=liberarTablero(nTablero,tablero);

	//LiberarBombas;
	liberarBombas(&listaBombas);	

	//printf("Direccion matriz: %p",tablero);

}

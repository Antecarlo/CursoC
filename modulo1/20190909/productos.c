/*
Calcular el precio final de un producto, el iva y la suma final:
*/

#include<stdio.h>

int main(){

	double precio=100.85,iva=21,final;
	
	final=precio+(precio*iva/100);

	printf("El precio inicial del producto es %g, el IVA es el %g y el precio final es de %g\n",precio,iva,final);
	printf("El precio inicial del producto es %f, el IVA es el %f y el precio final es de %f\n",precio,iva,final);

	//return 0;
}

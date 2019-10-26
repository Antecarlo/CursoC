/*
For statement
*/

#include <stdio.h>

int main(){

	int i;
	for(i=0;i<10;i++){
		//puts("Hola");
		printf("Hola numero %d\n",i+1);
	}
	
	//Cuenta atras
	puts("\nCuenta atras:\n");
	for(i=10;i>0;i--){
		printf("%d\n",i);
	}

	/*
	Similar
	puts("\nCuenta atras:\n");
	for(i=10;i;i--){
		printf("%d\n",i);
	}
	*/

	
	//De -10 a 10 sin 0
	puts("De -10 a 10 sin 0:\n");
	for(i=-10;i<11;i++){ //Llaves innecesarias en este caso (solo 1 instruccion)
		if(i)
			printf("%d\n",i);
	}

		
	
}



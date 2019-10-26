// Uniones:

#include <stdio.h>

struct datos {  
	unsigned u0:1;  
	unsigned u1:1;  
	unsigned u2:1;  
	unsigned u3:1;  
	unsigned u4:1;  
	unsigned u5:1;  
	unsigned u6:1;  
	unsigned u7:1; 
}; 
 
union v_datos {  
	char car;  
	struct datos d_car; 
};

int main(){ 
	union v_datos var; 
	printf("%ld bytes\n", sizeof(var)) ;
	var.car = 'A';  
	printf("%u%u%u%u%u%u%u%u",  
	var.d_car.u7,  
	var.d_car.u6,  
	var.d_car.u5,  
	var.d_car.u4,  
	var.d_car.u3,  
	var.d_car.u2,  
	var.d_car.u1,  
	var.d_car.u0); 
	var.d_car.u1 = 1;
	printf("\n%c", var.car); 
}

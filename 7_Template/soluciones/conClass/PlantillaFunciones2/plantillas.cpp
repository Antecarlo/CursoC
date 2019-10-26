#include "plantillas.h"

template<class T> T menor (T a, T b){
	return (a < b) ? a : b;
}

void temp(){
	int r = menor(2,3);
	char c = menor('a','b');
	double d = menor(8.9,7.8);
	float f = menor(7.7F, 8.8F);
}

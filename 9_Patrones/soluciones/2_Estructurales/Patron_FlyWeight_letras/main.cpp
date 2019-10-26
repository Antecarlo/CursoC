#include <iostream>
using namespace std;

#include "texto.h"
#include "flyweightfactory.h"

int main(){
	FlyWeightFactory *f = new FlyWeightFactory;
	Texto t(f);
	t.generar();
	t.print();
	cout << endl << "NUMERO DE ESTILOS CREADOS: " 
	     << f->getNumEstilos() << endl;
	delete f;
}

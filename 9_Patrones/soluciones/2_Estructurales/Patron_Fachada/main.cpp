#include <iostream>
using namespace std;

#include "fachada.h"
#include "cliente.h"


int main(int argc, char** argv) {
	Cliente c("50.000.000A", "Jose Sanchez");
	double cantidad = 175000;
	Fachada hipoteca;
	
	if (hipoteca.concederHipoteca(c, cantidad))
		cout << endl << "Hipoteca de " << cantidad << " concedida";
	else
		cout << endl << "La hipoteca ha sido rechazada";
	
	return 0;
}

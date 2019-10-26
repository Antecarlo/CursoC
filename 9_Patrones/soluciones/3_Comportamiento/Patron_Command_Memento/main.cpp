#include "ICalculadora.h"
#include "Calculadora.h"
#include "operacion.h"
#include "OperacionSuma.h"
#include "OperacionResta.h"

int main(){
	ICalculadora *calc = new Calculadora(10);
	calc->operar(new OperacionSuma(20));
	calc->operar(new OperacionSuma(20));
	calc->operar(new OperacionSuma(30));
	calc->operar(new OperacionResta(5));
	//calc->verHistorialDeComandos();
	calc->undo();
	calc->undo();
	calc->reset();
	delete calc;
}

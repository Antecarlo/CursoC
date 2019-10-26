#include "Reloj.h"
#include "RelojAnalogico.h"
#include "RelojDigital.h"

int main(){
	Reloj *reloj = new Reloj();
	RelojAnalogico *analogico = new RelojAnalogico(reloj);
	RelojDigital *digital = new RelojDigital(reloj);
	reloj->pulso();
	
	delete reloj;
	delete analogico;
	delete digital;
}

#include "Escena.h"
#include "FabricaDePrototipos.h"
#include "Figura.h"

int main()
{
	FabricaDePrototipos fabrica;
	Escena escena;
	
	Figura *f = fabrica.getFigura(TRIANGULO);
	f->setColor("yellow");
	escena.addFigura(f);
	
	f = fabrica.getFigura(TRIANGULO);
	f->setColor("orange");
	escena.addFigura(f);
	
	f = fabrica.getFigura(CIRCULO);
	((Circulo *)f)->setRadio(9); // En C
	(reinterpret_cast<Circulo*>(f))->setRadio(8);// En C++
	f->setColor("cyan");
	escena.addFigura(f);
	
	escena.draw();
}

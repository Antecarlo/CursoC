#include "manejadorsms.h"

ManejadorSMS::ManejadorSMS()
{
}

void ManejadorSMS::procesarPeticion(Peticion p)
{
	if (p.getTipo() == SMS)
		cout << "Se envia " << p.getContenido() << " por SMS" << endl;
	else {
		cout << "SMS reenvia la peticion ..." << endl;
		this->sucesor->procesarPeticion(p);
	}
}

ManejadorSMS::~ManejadorSMS()
{
}

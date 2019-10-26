#include "manejadoremail.h"

ManejadorEMail::ManejadorEMail()
{
}

void ManejadorEMail::procesarPeticion(Peticion p)
{
	if (p.getTipo() == EMAIL)
		cout << "Se envia " << p.getContenido() << " por Email" << endl;
	else {
		cout << "EMAIL reenvia la peticion ..." << endl;
		this->sucesor->procesarPeticion(p);
	}
}


ManejadorEMail::~ManejadorEMail()
{
}

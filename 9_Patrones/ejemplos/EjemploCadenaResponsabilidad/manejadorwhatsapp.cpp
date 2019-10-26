#include "manejadorwhatsapp.h"

ManejadorWhatsapp::ManejadorWhatsapp()
{
}

void ManejadorWhatsapp::procesarPeticion(Peticion p)
{
	if (p.getTipo() == WHATSAPP)
		cout << "Se envia " << p.getContenido() << " por Whatsapp" << endl;
	else {
		cout << "WHATSAPP reenvia la peticion ..." << endl;
		this->sucesor->procesarPeticion(p);
	}
}

ManejadorWhatsapp::~ManejadorWhatsapp()
{
}

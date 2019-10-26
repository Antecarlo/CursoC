#include "manejadorwhatsapp.h"

ManejadorWhatsApp::ManejadorWhatsApp()
{
}

void ManejadorWhatsApp::manejarPeticion(Peticion peticion) {
	if (peticion.getId()==WHATSAPP)
		cout << "WhatsApp: " << peticion.getDescripcion() << " " << peticion.getId() << endl;
	
	else {
		cout << "WhatsApp reenvia la peticion ..." << endl;
		this->sucesor->manejarPeticion(peticion);
	}
}

ManejadorWhatsApp::~ManejadorWhatsApp()
{
}

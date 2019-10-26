#include "manejadorsms.h"

ManejadorSMS::ManejadorSMS()
{
}

void ManejadorSMS::manejarPeticion(Peticion peticion) {
	if (peticion.getId()==SMS)
		cout << "SMS: " << peticion.getDescripcion() << " " << peticion.getId() << endl;
	
	else {
		cout << "SMS reenvia la peticion ..." << endl;
		this->sucesor->manejarPeticion(peticion);
	}
}

ManejadorSMS::~ManejadorSMS()
{
}

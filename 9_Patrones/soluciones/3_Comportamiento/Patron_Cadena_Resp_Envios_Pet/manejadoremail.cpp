#include "manejadoremail.h"

ManejadorEMail::ManejadorEMail()
{
}

void ManejadorEMail::manejarPeticion(Peticion peticion) {
	if (peticion.getId()==EMAIL)
		cout << "Email: " << peticion.getDescripcion() << " " << peticion.getId() << endl;
	
	else {
		cout << "Email reenvia la peticion ..." << endl;
		this->sucesor->manejarPeticion(peticion);
	}
}

ManejadorEMail::~ManejadorEMail()
{
}

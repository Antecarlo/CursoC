#include <iostream>
using namespace std;

#include "peticion.h"
#include "manejador.h"
#include "manejadorsms.h"
#include "manejadoremail.h"
#include "manejadorwhatsapp.h"

int main(int argc, char** argv) {
	Peticion p(SMS, "mensaje de prueba");
	Manejador *sms = new ManejadorSMS();
	Manejador *email = new ManejadorEMail();
	Manejador *whatsapp = new ManejadorWhatsapp();
	
	// La cadena de Responsabilidad es:
	// whatsapp -> email -> sms
	email->setSucesor(sms);
	whatsapp->setSucesor(email);
	
	whatsapp->procesarPeticion(p);
	
	delete sms;
	delete email;
	delete whatsapp;
	return 0;
}

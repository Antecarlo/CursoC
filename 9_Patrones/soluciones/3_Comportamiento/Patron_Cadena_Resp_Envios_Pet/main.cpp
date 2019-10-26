#include "manejador.h"
#include "manejadorsms.h"
#include "manejadoremail.h"
#include "manejadorwhatsapp.h"
#include "peticion.h"

int main(){
	Peticion p(SMS, "Mensaje de prueba");
		
	Manejador *sms = new ManejadorSMS();
	Manejador *email = new ManejadorEMail();
	Manejador *whatsapp = new ManejadorWhatsApp();

	email->setSucesor(sms);
	whatsapp->setSucesor(email);
		
	whatsapp->manejarPeticion(p);
	
	// Liberar mem
	delete whatsapp;
	delete email;
	delete sms;		
}

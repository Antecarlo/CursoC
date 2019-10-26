#include "singleton.h"
#include <time.h>

Singleton *Singleton::instance = NULL;

Singleton::Singleton(){
	
	time_t tiempo = time(0);
 	struct tm *tlocal = localtime(&tiempo);
 	char output[128];
 	strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
 	
 	this->fechaHora = output;
}

Singleton *Singleton::getInstance(){
	
	if (Singleton::instance == NULL)
		Singleton::instance = new Singleton();
		
	return Singleton::instance;
	
}

string Singleton::getTime(){
	 return this->fechaHora;
}

Singleton::~Singleton(){
	
	delete this->instance;
	this->instance = NULL;
}

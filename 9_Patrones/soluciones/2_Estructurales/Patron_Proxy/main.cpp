#include <iostream>
using namespace std;

#include "servidorproxy.h"


int main(int argc, char** argv) {
	Servidor *server = new ServidorProxy(80, "http://free.es");
	
	server->descargar("prueba.doc");
	
	delete server;
	return 0;
}

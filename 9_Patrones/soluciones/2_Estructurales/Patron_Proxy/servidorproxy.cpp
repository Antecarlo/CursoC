#include "servidorproxy.h"

ServidorProxy::ServidorProxy(int puerto, string host)
{
	this->puerto = puerto;
	this->host = host;
	this->servidorReal = NULL;
	cout << "Proxy inicializado ..." << endl;
}

void ServidorProxy::descargar(string url)
{
	// 1) Comprobar si esta o no restringido el acceso.
	cout << "El proxy intercepta la url: " << url << endl;
	
	if (!this->restringido(url)){
	
		
		// 2) Comprobar si está o no creado el servidor real
		if (this->servidorReal == NULL)
			this->servidorReal = new ServidorReal(this->puerto, this->host);
			
		// Descagar:
		this->servidorReal->descargar(url);
		
	} else
		cout << "La url esta restringida ..." << endl;
}

bool ServidorProxy::restringido(string url)
{
	// Podemos tener un vector<string> de direcciones restringidas ...
	return url == "prohibido.avi";
}

ServidorProxy::~ServidorProxy()
{
	if (this->servidorReal != NULL)
		delete this->servidorReal;
}

#include "servidorreal.h"

ServidorReal::ServidorReal(int puerto, string host)
{
	cout << "Servidor iniciado ..." << endl;
	this->puerto = puerto;
	this->host = host;
}

void ServidorReal::descargar(string url)
{
	cout << "Descargando " << this->host << "/" << this->puerto << "/" << url;
}

ServidorReal::~ServidorReal()
{
}

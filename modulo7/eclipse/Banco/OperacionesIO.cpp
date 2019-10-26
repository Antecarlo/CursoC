/*
 * OperacionesIO.cpp
 *
 *  Created on: 15 oct. 2019
 *      Author: antonio
 */

#include "OperacionesIO.h"

#include <fstream>
#include <stdexcept>

OperacionesIO::OperacionesIO() {
	// TODO Auto-generated constructor stub

}

void OperacionesIO::cargarCuentas(std::map<int, Cuenta>& cuentas) {
	Cuenta cuenta;
	std::ifstream fich("datos.bin", std::ios::binary | std::ios::in);
		if(!fich){
			throw std::runtime_error("error al abrir el fichero");
		}
	while(fich.read(reinterpret_cast<char *>(& cuenta),sizeof(Cuenta))){
		cuenta.imprimir();
		cuentas[cuenta.getNumero()]=cuenta;
	}
	fich.close();
}

void OperacionesIO::grabarCuenta(const Cuenta& cuenta) {
	std::ofstream fich("datos.bin", std::ios::binary | std::ios::app);
		if(!fich){
			throw std::runtime_error("error al abrir el fichero");
		}
	//fich.write(reinterpret_cast <char *>(&cuenta),sizeof(Cuenta));
	fich.write((char *)& cuenta, sizeof(Cuenta));
	fich.close();
}

Cuenta OperacionesIO::buscarTarjetaIO(Tarjeta tarjeta) {
	Cuenta aux;
	return aux;
}

OperacionesIO::~OperacionesIO() {
	// TODO Auto-generated destructor stub
}


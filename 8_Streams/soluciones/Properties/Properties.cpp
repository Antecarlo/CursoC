// Properties.cpp: implementation of the Properties class.
//
//////////////////////////////////////////////////////////////////////

#include "Properties.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

#include <string>
#include <iostream>
#include <fstream>
using namespace std;


Properties::Properties(string fich){
	char datosFich[1024];
	string clave, valor, linea;
	int pos;
	fstream fuente;

	fuente.open(fich.c_str(), ios::in);
	if (!fuente){
		cout << "No se encontró el fichero .." << endl;
		return;
	}

	while (fuente.getline(datosFich, 1024)){
		linea = datosFich;
		pos = linea.find("=",0);

		if (pos >= 0 && pos <= linea.length()){
			clave = linea.substr(0, pos);
			valor = linea.substr(pos+1, linea.length() - (pos + 1));
		}


		// Insertamos en el map el par:
		this->datos[clave] = valor;
	

		// Chequeo:
		//cout << "Clave:" << clave << ":Valor:" << valor  << ":" << endl;
	}
	this->nombreFichero = fich;
}

string Properties::getString(string clave){
	return datos[clave];
}

void Properties::putString(string clave, string valor){
	datos[clave] = valor;
}


void Properties::save(){
	map<string,string>::iterator it;
	string linea;
	fstream fuente;

	fuente.open(this->nombreFichero.c_str(), ios::out);
	if (!fuente){
		cout << "No se encontró el fichero .." << endl;
		return;

	}
	// Recorrer el map con un iterador:
	for (it = datos.begin() ; it != datos.end() ; it++){
		linea = it->first + "=" + it->second + "\n";
		fuente << linea.c_str();
		
		// Chequeo:
		//cout << "Escribo " << linea << endl;
	}
	fuente.close();
}


Properties::~Properties(){

}

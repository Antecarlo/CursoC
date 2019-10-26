#include "idiomasingleton.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

IdiomaSingleton *IdiomaSingleton::instance = NULL;

IdiomaSingleton::IdiomaSingleton(string idioma){
	char linea[50];
	string nombreFichero;
	string datos, clave, valor;
	int pos;

	this->id = idioma;	

	// es -> idioma_es.txt, en: -> idioma_en.txt
	nombreFichero = "diccionario_" + idioma + ".txt";

	ifstream os(nombreFichero.c_str(), ios::in);
	if (!os){
		cerr << "Error al abrir el fichero" << endl;
		return;
	}

	while (os.getline(linea, 1024)){
		datos = linea;
		pos = datos.find("=",0);

		if (pos >= 0 && pos < datos.length()){
			clave = datos.substr(0, pos);
			valor = datos.substr(pos+1, datos.length());
			
			mapa[clave] = valor;
		}
	}

	os.close();	
}

string IdiomaSingleton::get(string clave) const {
	return mapa.at(clave);
}

const IdiomaSingleton *IdiomaSingleton::getInstance(string id){
	if (instance == NULL)
		instance = new IdiomaSingleton(id);
		
	return instance;
}

IdiomaSingleton::~IdiomaSingleton(){
	delete instance;
	instance = NULL;
}

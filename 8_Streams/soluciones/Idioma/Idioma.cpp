// Idioma.cpp: implementation of the Idioma class.
//
//////////////////////////////////////////////////////////////////////

#include "Idioma.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Idioma::Idioma(string idioma) // recibe: en, es, fr, etc.
{
	char linea[50];
	string nombreFichero;
	string datos, clave, valor;
	int pos;

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

Idioma::~Idioma()
{

}

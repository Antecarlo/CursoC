#include <iostream>
using namespace std;

#include "documento.h"
#include "horario.h"
#include "pedido.h"
#include "cliente.h"
#include "detalle.h"

#include "formato.h"
#include "formatocsv.h"
#include "formatohtml.h"

string formatear(Documento *doc, Formato *f)
{
	doc->setFormato(f);
	return doc->format();
}

int main()
{
	// TEST CON EL PEDIDO:
	Cliente cliente("8484833-A", "Logista", "Trigo 39");						
	Pedido pedido(cliente);
	
	Detalle d1("portatil", 2, 550);
	Detalle d2("mesa", 1, 120);	
	
	pedido.addDetalle(d1);
	pedido.addDetalle(d2);
	
	cout << "PEDIDO: " << endl;
	cout << "En HTML: " << endl << formatear(&pedido, new FormatoHTML()) << endl << endl;
	cout << "En CSV: " << endl <<  formatear(&pedido, new FormatoCSV()) << endl << endl << endl;
	
	// TEST CON EL HORARIO:
	Horario horario;
	
	vector<string> cab;
	cab.push_back("L");	
	cab.push_back("M");
	cab.push_back("X");
	cab.push_back("J");
	cab.push_back("V");
	
	vector<vector<string>> tabla;
	vector<string> linea1;
	linea1.push_back("C++");
	linea1.push_back("Python");
	linea1.push_back("PHP");
	linea1.push_back("Java");
	linea1.push_back("C#");
	
	tabla.push_back(linea1);
	
	horario.setCabeceras(cab);
	horario.setTabla(tabla);
	
	
	cout << "HORARIO: " << endl;
	cout << "En HTML: " << endl << formatear(&horario, new FormatoHTML()) << endl << endl;
	cout << "En CSV: " << endl <<  formatear(&horario, new FormatoCSV()) << endl;
}

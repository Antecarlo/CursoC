#include "formatocsv.h"

FormatoCSV::FormatoCSV()
{
}

string FormatoCSV::getCabeceras(vector<string> cab)
{
	return listToCSV(cab);
}

string FormatoCSV::getTabla(vector<vector<string> > tabla)
{
	string csv = "";
	vector<string> aux;
	
	for (int i = 0 ; i < tabla.size() ; i++)
	{
		aux = tabla[i];
		csv += listToCSV(aux);
	}
	
	return csv;
}

string FormatoCSV::listToCSV(vector<string> lista)
{
	string csv = "";
	
	for (int i = 0 ; i < lista.size() ; i++)
	{
		csv += lista[i] + ";";		
	}
	csv = csv.substr(0, csv.length()-1);
	csv += "\n";
	return csv;
}

FormatoCSV::~FormatoCSV()
{
}

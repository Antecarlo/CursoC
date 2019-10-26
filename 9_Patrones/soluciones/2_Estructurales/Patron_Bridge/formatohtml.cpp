#include "formatohtml.h"

FormatoHTML::FormatoHTML()
{
}

string FormatoHTML::getCabeceras(vector<string> cab)
{
	return listToHTML(cab);
}

string FormatoHTML::getTabla(vector<vector<string> > tabla)
{
	string csv = "";
	vector<string> aux;
	
	for (int i = 0 ; i < tabla.size() ; i++)
	{
		aux = tabla[i];
		csv += listToHTML(aux);
	}
	
	return csv;
}

string FormatoHTML::listToHTML(vector<string> lista)
{
	string html = "";
	for (int i = 0 ; i < lista.size() ; i++)
	{
		html += "<td>" + lista[i] + "</td>\n";
	}
	html = "<tr>\n" + html + "</tr>\n";
	return html;
}

FormatoHTML::~FormatoHTML()
{
}

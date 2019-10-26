/*
 * FormateadorCsvHtml5.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#define PATH_TEMPLATE_HTML5 "./templates/template.html"
#define TAM_LINEA 1024

#include "FormateadorCsvHtml5.h"

#include <sstream>
#include <fstream>

FormateadorCsvHtml5::FormateadorCsvHtml5() {
	// TODO Auto-generated constructor stub

}

std::string FormateadorCsvHtml5::rowToHtml(std::string csv) {
	std::istringstream is(csv);
	std::string filaHTML,columnaCSV;

	filaHTML = "<tr>";
	while (std::getline(is,columnaCSV,';')){
		filaHTML += this->colToHtml(columnaCSV);
	}
	filaHTML +="<tr>";
	return filaHTML;
}

FormateadorCsvHtml5::~FormateadorCsvHtml5() {
	// TODO Auto-generated destructor stub
}

void FormateadorCsvHtml5::inyectarCSV(std::string ficheroCSV,std::ofstream & foutHTML) {
	std::ifstream fCsv(ficheroCSV);
	std::string cadena;
	char linea [TAM_LINEA];

	foutHTML << "<table>";
	while (fCsv.getline(linea, TAM_LINEA)){
		cadena= std::string(linea);
		//Escribe en el documento final de HTML, la fila de CSV convertida a formato HTML.
		foutHTML << this->rowToHtml(cadena);
	}
	foutHTML << "</table>";
	fCsv.close();
}

std::string FormateadorCsvHtml5::formatearCsvHtml5(std::string ficheroCSV) {
	std::string cadena;
	char linea[TAM_LINEA];

	std::ifstream finTemplate(PATH_TEMPLATE_HTML5);
	std::string pathFicheroHTML5 = this->getNombreHTML(ficheroCSV);
	std::ofstream foutHTML(pathFicheroHTML5);

	//Recorrer la plantilla linea a linea y se va grabando en otro fichero HTML de salida
	//Cuando encontremos la palabra <body>, se inyecta el CSV en formato HTML.
	while(finTemplate.getline(linea, TAM_LINEA)){
		cadena=std::string(linea);

		//Grabar en el fichero destino;
		foutHTML << cadena;

		if(cadena == "<body>"){
			this->inyectarCSV(ficheroCSV,foutHTML);
		}
	}
	finTemplate.close();
	foutHTML.close();
	return pathFicheroHTML5;
}

std::string FormateadorCsvHtml5::getNombreHTML(std::string ficheroCSV) {
	//Devuelve el mismo nombre de fichero pero con extension HTML.

	/*
	std::istringstream ss(ficheroCSV);
	std::string token;

	getline(ss, token, '.');
	return token+".html";
	*/


 int pos;
	std::string ficheroHTML;

	pos=ficheroCSV.find_last_of('.');
	if(pos!=-1){
	 ficheroHTML = ficheroCSV.substr(0,pos);
	 ficheroHTML += ".html";
	}

return ficheroHTML;


}


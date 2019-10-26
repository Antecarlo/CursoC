/*
 * FormateadorCsvHtml5.h
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#ifndef FORMATEADORCSVHTML5_H_
#define FORMATEADORCSVHTML5_H_

#include <string>
#include <fstream>

class FormateadorCsvHtml5 {

	std::string ficheroCSV;
	void inyectarCSV(std::string ficheroCSV,std::ofstream & foutHTML);

public:
	FormateadorCsvHtml5();

	std::string formatearCsvHtml5 (std::string ficheroCSV); //Copia la plantilla y cuando llegue a body introduce el CSV
	std::string getNombreHTML(std::string ficheroCSV);
	std::string colToHtml(std::string columna){return "<td>"+columna+"</td>";}
	std::string rowToHtml (std::string csv);

	virtual ~FormateadorCsvHtml5();
};

#endif /* FORMATEADORCSVHTML5_H_ */

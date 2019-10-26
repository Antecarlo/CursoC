/*
 * main.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#include "ListDir.h"
#include "FormateadorCsvHtml5.h"

#include <vector>
#include <iostream>
#include <string>

void pruebaListDir(){
	std::vector<std::string> ficheros;
	FormateadorCsvHtml5 formateador;

	try{
		ficheros=ListDir::getCSV("./CSV"); //capturamos todos los ficheros
		for(auto f:ficheros){
			std::cout <<"Formateando "<< f<< std::endl;
			std::cout << "Fichero: "<< formateador.formatearCsvHtml5(f)
			<< " generado correctamente ..." << std::endl;
		}
		}catch(std::invalid_argument & e){
		std::cout << e.what() << std::endl;
	}
}

void pruebaFormateador(){
	FormateadorCsvHtml5 format;
	std::string csv = "Nombre;Apellidos;Edad";
	std::cout << format.rowToHtml(csv)<<std::endl;
}

int main(){
	pruebaListDir();
	//pruebaFormateador();
}



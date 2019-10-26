/*
 * main.cpp
 *
 *  Created on: 14 oct. 2019
 *      Author: antonio
 */


#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

#include "util.h"

std::vector <std::vector<int>> cargaTabla(std::string path, char delim=';'){
	//const char *nombre = path.c_str();
	std::vector<std::vector<int>> tabla;
	std::vector<int> fila;


	std::ifstream fich(path.c_str(),std::ios::in); //abrimos el fichero
	//std::ifstream fich(path,std::ios::in);
	//std::ifstream fich(nombre,std::ios::in);
	std::string linea;
	char cad[1024];

	if(!fich){
		std::cout << "Error, no se encuentra el fichero" << std::endl;
		std::exit(1);
	}

	while (fich.getline(cad,1024)){ //leemos lineas del fichero
		linea=std::string(cad);
		fila=util::getColumnasInt(linea,delim);
		tabla.push_back(fila);
		//std::cout << linea << std::endl;
	}

	fich.close();
	return tabla;
}

void imprimirTabla(std::vector<std::vector<int>> tabla){
	for (auto fila : tabla){
		for (auto elemento : fila){
			std::cout << std::setfill(' ')<< std::setw(2) <<elemento << " ";
		}
		std::cout << std::endl;
	}
}

/*
void leerCSV(const char *path){
	//std::ifstream fich("./datos.csv",std::ios::in);
	std::ifstream fich(path,std::ios::in);
*/
void leerCSV(){
	std::ifstream fich("./datos.csv",std::ios::in);
	std::string linea;
	char cad[1024];

	if(!fich){
		std::cout << "Error, no se encuentra el fichero" << std::endl;
		std::exit(1);
	}

	while(fich.getline(cad,1024)){
		linea= std::string(cad);
		std::cout << linea << std::endl;
	}
	fich.close();
}


int main(int argc, char *argv[]){
	if(argc==2){
		std::vector<std::vector<int>> tabla = cargaTabla(argv[1]);
		imprimirTabla(tabla);
	}else{
		std::cout << "Se esperaba el fichero CSV por argumento... " << std::endl;
	}
}

/*
int main(){
		//leerCSV();
		//cargaTabla("datos.csv");
}
*/

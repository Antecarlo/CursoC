/*
 * main.cpp
 *
 *  Created on: 14 oct. 2019
 *      Author: antonio
 */

#include <iostream>
#include "stdio.h"
#include <string.h>
#include "Fichero.h"


int main(int argc, char *argv[]){
	if(argc==2){
		//char end[80]=".ini";
		//std::cout << strcat(argv[1],end) << std::endl;
		//Fichero fichero(strcat(argv[1],end));

		std::string end = ".ini";
		std::cout << std::string(argv[1]) + end << std::endl;
		Fichero fichero(std::string(argv[1]) + end);
		fichero.imprimirMapa();

	}else{
		std::cout << "Few arguments... :"<< argc << std::endl;
	}
}




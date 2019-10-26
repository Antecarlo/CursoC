/*

Ejemplo para  grabar un fichero csv.

*/

#include <iostream>
#include <string>
#include <fstream>

#include <ctime>
#include <cstdlib>

int main(){

	std::ofstream fich; //Flujo
	std::string nombre;


	//Pedir filas y columnas
	int fil, col;

	std::cout << "Numero de filas: "<< std::endl;
	std::cin >> fil;
	std::cout << "Numero de columnas: "<< std::endl;
	std::cin >> col;

	//Random
	std::srand(std::time(0));

	// Abrir fichero de salida (para escribir):
	fich.open("./datos.csv",std::ios::out);

	// Bucle de escritura
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){		
			if(j==col-1){
				fich << std::rand()%100;
			}else{
				fich << std::rand()%100 << ";";
			}
		}
		fich << std::endl;
	}

	
	fich.close();
}

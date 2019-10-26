#include <iostream>
#include <sstream>
#include <vector>
#include <string>

//using namespace std;

std::vector<std::string> getColumnas(std::string linea, char delim=';'){
	std::vector <std::string> columnas;
	std::istringstream ss(linea);
	std::string token;

	while (std::getline(ss,token,delim))
		columnas.push_back(token);

	return columnas;
}

int main(){
	std::string input = "codigo;nombre;apellidos;fecha;hora";
	std::vector<std::string> columnas;

	columnas=getColumnas(input);
	for (auto s:columnas)
		std::cout << s << std::endl;

	std::string fecha ="23/10/2019";
	std::vector<std::string> campos;

	campos=getColumnas (fecha, '/');
	for (auto s:campos)
		std::cout << s << std::endl;
}


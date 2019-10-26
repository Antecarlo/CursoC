/*

Pruebas con la clase string

*/

#include <string>
#include <iostream>
#include<typeinfo>


void leerCadenas(){
	std::string s;

	std::cout << "Dame string: ";
	//std::cin >> s; // Corta la cadena en el primer espacio en blanco
	std::getline(std::cin,s);
	std::cout << "String: " << s << std::endl;

}

void extraer (const std::string & ficheroCompleto, std::string & fichero, std::string & extension){

	auto p = ficheroCompleto.find(".",0);
	extension=ficheroCompleto.substr(p+1);
	fichero=ficheroCompleto.substr(0,p);
	//std::cout << typeid(p).name() << std::endl;
	//std::cout << std::decltype(p) << std::endl;

}

int main(){
/*
	std::string s= "hola";

	for (auto c:s)
		std::cout << c << std::endl;

	for (int i=0; i<s.length();i++)
		std::cout << s.at(i) << std::endl;

	try{
		//Nos salimos fuera de la cadena
		std::cout << s.at(80) << std::endl;
	}catch(std::out_of_range & e){
		std::cout << e.what() << std::endl;
	}

	const char * p = s.c_str();
	auto p2 = s.c_str();
	//p2[0]='H'; //Error solo lectura.
	std::cout << "p2: " << p2 << std::endl;

	char * ptr= const_cast <char *>(p2); //Quitar el efecto de const al puntero: p2
	ptr[0]='X';
	std::cout << s << std::endl;

	//Insertar chars dentro del string:
	string mensaje = "mensaje de prueba";
	mensaje.insert(7,"hola");
	std::cout << "mensaje final: " << mensaje << std::endl;

	//Sustituir chars:
	mensaje.replace(10,mensaje.length(),"_x");
	std::cout << "mensaje final: " << mensaje << std::endl;
	*/

	//Extraer el nombre del fichero y la extension: en Windows
	std::string fichero,extension;
	std::string ficheroCompleto = "ejemplo_string.cpp"; //"ejemplo_string" y "cpp"
	extraer(ficheroCompleto,fichero,extension);
	std::cout << "Fichero completo: " << ficheroCompleto << std::endl;
	std::cout << "Fichero: " << fichero << std::endl;	
	std::cout << "Extension: " << extension << std::endl;

	fichero = "cv.pdf.2";
	std::cout << "primer punto " << fichero.find(".") << std::endl;
	std::cout << "ultimo punto " << fichero.find_last_of(".") << std::endl;


}



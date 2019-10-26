/* 

	Ejemplo para capturar excepciones

*/

#include<vector>
#include<string>
#include<iostream>
#include<stdexcept>
#include<typeinfo>

float division(int n, int m){
	//int * p = 0;
	//const std::type_info & info = typeid(p);
	//std::cout << info.name() << std::endl;

	//Lanzar una excepcion
	if(n>=m){
		return (float) n/m;
	}else{
		const char * s = "n es menor que m";
		//throw std::invalid_argument(std::string(s));	
		throw std::invalid_argument(s);
	}
}


void propagacion_excep1(int pos){

	std::string cadena = "Hola que tal";
	std::cout << "Letra " << pos << " es " << cadena.at(pos) << std::endl;
}

void propagacion_excep(int pos){
	try{

		propagacion_excep1(pos);

	}catch(std::out_of_range &e){

		std::cout << "Se ha producido un error" << std::endl;	
		std::cout << e.what() << std::endl;	
	}
}


void capturar_excepcion(){
	std::vector <int> v={6,5,4,3,2,1,1};

	try{
	//Recuperar una posicion no valida del vector:
	for(int i=0;i<=v.size();i++)
		std::cout << v.at(i) << std::endl;
	}catch(std::out_of_range & e){
		std::cout << "Se ha producido un error" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

void capturar_excepcion_superclase(){
	std::vector <int> v={6,5,4,3,2,1,1};

	try{
	//Recuperar una posicion no valida del vector:
	for(int i=0;i<=v.size();i++)
		std::cout << v.at(i) << std::endl;
	}catch(std::exception & e){
		std::cout << "Se ha producido un error" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

void varias_excepciones(){
	std::vector <int> v = {6,5,4,3,2,1,1};

	try{
		std::cout << v.at(20) << std::endl;
		division(3,800);

/*
	}catch(std::invalid_argument & e1){

		std::cout << e1.what() << std::endl;

	}catch(std::out_of_range & e2){

		std::cout << e2.what() << std::endl;
*/
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}

}

void otrasExcepciones(){
	//throw 20;
	//throw "mensaje de prueba";
	//throw std::string("mensaje de error");
	throw true;
}

void capturar_otrasExcepciones(){
	
	try{
	
		otrasExcepciones();

	}catch(int & i){
		std::cout << "Cod. de error " << i << std::endl;
	}catch(const char * s){
		std::cout << "Mensaje de error " << std::endl;
	}catch(std::string & e){
		std::cout << "string mensaje de error " << e << std::endl;
	}
}

void capturar_otrasExcepcionesGenerales(){
	
	try{
		otrasExcepciones();
	}catch(...){
		std::cout << "Se ha producido un error"<< std::endl;
	}
}

class HoraException : public std::exception{

	std::string mensaje;
	
	public:
		HoraException(std::string mensaje): mensaje(mensaje){};
		virtual const char * what () const throw(){
			return mensaje.c_str(); //devuelve un puntero al mensaje
		}
		~HoraException() throw() {};
};

void excepcionesPersonalizadas(int h, int m, int s){
	//comprobar que h, m y s estan dentro de los rangos de una hora valida.
	//si no asi, lanzar una HoraException con el mensaje adecuado.
	
	if(h<0 || h>23){
		throw HoraException("El parametro horas introducido no es correcto");
	}
	if ( m <0 || m>59){
		throw HoraException("El parametro minutos introducido no es correcto");
	}
	if(s<0 || s>59){
		throw HoraException("El parametro segundos introducido no es correcto");
	}

}


int main(){

	//capturar_excepcion();
	//capturar_excepcion_superclase();

	//propagacion_excep(13);
	//varias_excepciones();
	//capturar_otrasExcepcionesGenerales();

	try{
		excepcionesPersonalizadas(21,56,78);
	}catch (HoraException & e){
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	

}

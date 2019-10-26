/*

	Generar un fichero de estructuras y leerlo

*/

#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>

typedef struct{
	char nombre[50];
	int telefono;	
} TCliente;

typedef struct{
	int numero;
	int pin;
} TTarjeta;

typedef struct {
	int numero;
	TCliente cliente;
	TTarjeta tarjeta;
	double saldo;
} TCuenta;

void imprimirCuenta(TCuenta cuenta){
	std::cout << "Num CC: " << cuenta.numero << std::endl;
	std::cout << "Num: " << cuenta.cliente.nombre << std::endl;
	std::cout << "Num T: " << cuenta.tarjeta.numero << std::endl;
	std::cout << "Saldo: " << cuenta.saldo << std::endl;

	std::cout << std::endl << std::endl;
}


TCuenta buscarTarjeta(TTarjeta t){
	//Buscar de forma secuencial en el fichero
	//Si no existe lanzar: invalid_argument

	TCuenta cuenta;
	bool existe;

	std::ifstream fich("datos.bin", std::ios::binary | std::ios::in);
	if(!fich){
		throw std::runtime_error ("error al abrir el fichero");
	}
	while(fich.read(reinterpret_cast<char *>(& cuenta),sizeof(TCuenta))){
		if(cuenta.tarjeta.numero==t.numero && cuenta.tarjeta.pin == t.pin){
			existe=true;
			break;
		}
	}
	fich.close();

	if(existe)
		return cuenta;
	else
		throw std::invalid_argument("Tarjeta incorrecta...");
}


/*
{
	long reg=-1;
	int i=0;

	TCuenta cuenta;
	std::ifstream fich("datos.bin", std::ios::binary | std::ios::app);
		if(!fich){
			std::cout << "error al crear el fichero" << std::endl;
		}else{

			while(fich.read(reinterpret_cast<char *>(& cuenta),sizeof(TCuenta))){
				if(cuenta.tarjeta.numero==t.numero && cuenta.tarjeta.pin ==t.pin{ 						
					reg=i;
					break;
				}
				i++;
			}

			if(reg!=-1){
				fich.seekg(reg);
				fich.read(reinterpret_cast<char *>(& cuenta),sizeof(TCuenta));
			}else{
				throw std::invalid_argument("La tarjeta no esta en la lista");
			}
		}
	fich.close();
	return cuenta;
}
*/


void generarFichero(){
	TCuenta cuentas[] = 
	{
		{111,{"Jorge Gomez",600123569},{1111,1111},1500.0},
		{222,{"Ana Gomez",600123569},{2222,2222},2500.0},
		{333,{"Alberto Gomez",600123569},{3333,3333},3500.0},
		{444,{"Sandra Gomez",600123569},{4444,4444},4500.0},
		{555,{"Raul Gomez",600123569},{5555,5555},5500.0},
	};
	std::ofstream fich("datos.bin", std::ios::binary | std::ios::app);
	if(!fich){
		std::cout << "error al crear el fichero" << std::endl;
		return; //break
	}

	for(int i=0; i<5; i++)
		fich.write(reinterpret_cast<char *>(& cuentas[i]),sizeof(TCuenta));
	fich.close();
	
}

void leerFichero(){
	TCuenta cuenta;
	std::ifstream fich("datos.bin", std::ios::binary | std::ios::app);
		if(!fich){
			std::cout << "error al crear el fichero" << std::endl;
			return; //break
		}
	while(fich.read(reinterpret_cast<char *>(& cuenta),sizeof(TCuenta))){
		imprimirCuenta(cuenta);
	}
	fich.close();
}


void accesoDirecto(){
	int pos;
	long reg;

	std::cout << "Numero de reg: (de 1 a 5):";
	std::cin >> pos;

	TCuenta cuenta;
	std::ifstream fich("datos.bin", std::ios::binary | std::ios::app);
		if(!fich){
			std::cout << "error al crear el fichero" << std::endl;
			return; //break
		}
	reg = (pos-1)*sizeof(TCuenta);
	fich.seekg(reg);

	if(fich.read(reinterpret_cast<char *>(& cuenta),sizeof(TCuenta))){
		imprimirCuenta(cuenta);
	}
	fich.close();
}

/*
void actualizarCuenta(){
	int pos;
	long reg;

	std::cout << "Numero de reg: (de 1 a 5):";
	std::cin >> pos;

	TCuenta cuenta;
	std::ifstream fich("datos.bin", std::ios::binary | std::ios::app);
	if(!fich){
		throw std::runtime_error ("error al abrir el fichero");
	}
	reg = (pos-1)*sizeof(TCuenta);
	fich.seekg(reg);

	if(fich.read(reinterpret_cast<char *>(& cuenta),sizeof(TCuenta))){
		imprimirCuenta(cuenta);
		cuenta.saldo+=1;
	}
	fich.close();
}
*/

bool actualizarCuenta(TCuenta cuenta){

	TCuenta cuentaFich;
	long pos=0;

	std::fstream fich("datos.bin", std::ios::binary | std::ios::app);
	if(!fich){
		throw std::runtime_error ("error al abrir el fichero");
	}

	while(fich.read(reinterpret_cast<char *>(& cuentaFich),sizeof(TCuenta))){
		pos = fich.tellg(); //Donde se queda el puntero - 1
		pos -=sizeof(TCuenta);
		std::cout << "Cuenta: " << cuentaFich.numero << " : " << pos << std::endl;
	
		if(cuentaFich.numero==cuenta.numero){
			std::cout << "Cuenta localizada: " << cuentaFich.numero << std::endl;

			//Actualizar
			fich.seekg(pos);
			fich.write(reinterpret_cast<char *>(& cuenta),sizeof(TCuenta));
			break;
		}
	}
	fich.close();
}


class Persona {

	std::string nombre;
	std::string apellidos;
	int edad;

	public:

	Persona(){};
	Persona(std::string nombre, std::string apellidos, int edad): nombre(nombre), apellidos(apellidos), edad(edad){}
	
	void imprimir(){
		std::cout << "Nombre: "<< nombre<< " Ape: "<< apellidos<< " Edad: " << edad<< std::endl;
	}

	~Persona(){}
};

void grabarPersonas(){
	Persona p1("AAA","AAAAAAAA", 10);
	Persona p2("CCC","CCCCCCCC", 20);
	Persona p3("BBB","BBBBBBBB", 30);
	Persona aux;

	std::cout << "Tam: " << sizeof(p1) << " " << sizeof(p3) << std::endl;

	//Abrimos el archivo
	std::fstream fich("personas.bin", std::ios::binary | std::ios::out);
	if(!fich){
		throw std::runtime_error ("error al abrir el fichero");
	}

	//Escribimos
	fich.write(reinterpret_cast<char *>(& p1),sizeof(Persona));
	fich.write(reinterpret_cast<char *>(& p2),sizeof(Persona));
	fich.write(reinterpret_cast<char *>(& p3),sizeof(Persona));
	fich.close();

	//Abrimos el archivo
	std::fstream fich2("personas.bin", std::ios::binary | std::ios::in);
	if(!fich2){
		throw std::runtime_error ("error al abrir el fichero");
	}


	//fich.seekg(0); No hace falta porque ya se situa en el primer registro
	while(fich2.read(reinterpret_cast<char *>(& aux),sizeof(Persona))){
		aux.imprimir();
	}
	fich2.close();

}

int main(){
	//std::cout << "TCuenta ocupa: " << sizeof(TCuenta) << " bytes " << std::endl;
	//generarFichero();
	//leerFichero();
	//accesoDirecto();

	/*
	TTarjeta t = {4444,4444};
	TCuenta cuenta = buscarTarjeta(t);
	imprimirCuenta(cuenta);
	cuenta.saldo++;
	actualizarCuenta(cuenta);
	imprimirCuenta(cuenta);
	*/
	
	grabarPersonas();

}

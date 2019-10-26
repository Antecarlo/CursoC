#include "OperacionesFile.h"

OperacionesFile::OperacionesFile()
{
	
}
	
bool OperacionesFile::grabar(Empleado e)
{
	cout << "Grabando en F el empleado" << endl;
	e.imprimir();
}

bool OperacionesFile::borrar(int id)
{
	cout << "Borrando de F: El id " << id << endl;	
}
	
vector<Empleado> OperacionesFile::listar()
{
	vector<Empleado> emp;
	
	emp.push_back(Empleado("AAA F",1,"AAA",1000.0));
	emp.push_back(Empleado("BBB F",2,"BBB",2000.0));
	emp.push_back(Empleado("CCC F",3,"CCC",3000.0));
	
	return emp;
}

OperacionesFile::~OperacionesFile()
{
	
}

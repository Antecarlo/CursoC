#include "OperacionesBD.h"

	
OperacionesBD::OperacionesBD(){}
	
bool OperacionesBD::grabar(Empleado e)
{
	cout << "Grabando en BD el empleado" << endl;
	e.imprimir();
}
	
bool OperacionesBD::borrar(int id)
{
	cout << "Borrando de BD: El id " << id << endl;	
}
	
vector<Empleado> OperacionesBD::listar()
{
	vector<Empleado> emp;
	
	emp.push_back(Empleado("AAA BD",1,"AAA",1000.0));
	emp.push_back(Empleado("BBB BD",2,"BBB",2000.0));
	emp.push_back(Empleado("CCC BD",3,"CCC",3000.0));
	
	return emp;
}
	
OperacionesBD::~OperacionesBD(){}

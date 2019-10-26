#include <iostream>
#include <vector>

#include "usuario.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<Usuario> v1;
	vector<Usuario> v2;
	
	v1.push_back(Usuario(1,"A"));
	v1.push_back(Usuario(2,"B"));
	v1.push_back(Usuario(3,"C"));
	
	v2.push_back(Usuario(1,"A"));
	v2.push_back(Usuario(2,"B"));
	v2.push_back(Usuario(3,"C"));
	
	if (v1 == v2)
		cout << "vectores iguales" << endl;	
		
	else
		cout << "vectores NO iguales" << endl;
		
	return 0;
}

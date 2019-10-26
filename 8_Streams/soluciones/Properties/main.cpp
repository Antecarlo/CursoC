
#include <iostream>
#include "Properties.h"

using namespace std;


int main(){
	Properties p("propiedades.txt");

	cout << "clave1: " << p.getString("clave1") << endl;
	
	p.putString("clave1", "modificado1");

	cout << "clave1: " << p.getString("clave1") << endl;

	p.save();
}

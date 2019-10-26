#include <iostream>
using namespace std;

#include "idiomasingleton.h"

int main(int argc, char** argv) {
	const IdiomaSingleton *singleton  = IdiomaSingleton::getInstance("es");
	
	cout << singleton->get("key_nombre") << endl;
	cout << singleton->get("key_apellido") << endl;
}

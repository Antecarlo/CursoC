#include <iostream>
using namespace std;

#include "plantillas.h"

int main(int argc, char** argv) {
	
	cout << "menor con int " << menor(8, 9) << endl;
	cout << "menor con char " << menor('a','b') << endl;
	cout << "menor con double " << menor(8.2, 9.9) << endl;
	cout << "menor con float " << menor(8.1F, 9.7F) << endl;
	return 0;
}

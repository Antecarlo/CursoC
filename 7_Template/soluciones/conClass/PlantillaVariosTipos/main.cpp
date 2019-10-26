#include <iostream>
#include <string>
using namespace std;

#include "plantilla.h"
#include "plantilla.cpp"

int main(int argc, char** argv) {
	Plantilla<int,double,string> plan(6, 4.5, string("hola"));
	plan.print();
	return 0;
}

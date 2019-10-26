#include <iostream>
using namespace std;

#include "tupla.h"
#include "tupla.cpp"

#include "tupla3.h"
#include "tupla3.cpp"

int main(int argc, char** argv) {
	Tupla<int> t(3,6);
	Tupla3<double>(8.8,9.9,1.1);
		
}

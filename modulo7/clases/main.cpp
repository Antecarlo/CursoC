/*

MAIN

*/

#include <iostream>
#include "number.h"

int main(){

	Number<int>num(8);

	std::cout << num.get() << std::endl;
	num.set(88);
	std::cout << num.get() << std::endl;

}

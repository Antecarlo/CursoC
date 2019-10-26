/*

Prueba operadores relacionales de vector: =, <, >, >=, <=,!=.

*/

#include <vector>
#include <iostream>

void prueba_int(){
	std::vector<int> v1= {4,5,6,7,8};
	std::vector<int> v2= {4,5,6,7,8}; // ==
	//std::vector<int> v2= {10,5,6,7,8}; //!=

	if(v1==v2)
		std::cout << "v1 == v2" << std::endl;
	else
		std::cout << "v1 != v2" << std::endl;
}

int main(){

	prueba_int();

}

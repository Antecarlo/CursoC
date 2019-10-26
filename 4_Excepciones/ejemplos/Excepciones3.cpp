#include <iostream>
#include <stdexcept>
#include <string>
 
using namespace std;

class MyException : public exception {
	private:
		string m;
		
	public:
		MyException(string s): exception(), m(s){}
		virtual const char *what() throw() { return m.c_str(); }
		virtual ~MyException() throw() {}
};

void funcion1() {
	throw MyException("mensaje asociado");
}

void funcion2(){
	try {
		funcion1();
	} catch (MyException &e){
		throw; // Relanzar.
	}
}

int main() {
   
	try {
   
   		funcion2();
   		
	} catch(MyException &e){
		cout << "Error: " << e.what() << endl;
	}
	
   return 0;
}

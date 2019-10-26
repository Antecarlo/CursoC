// Compilado y probado exitosamente con Dev-C++
// Demostraci�n: excepci�n de la clase string
 
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string s = "Hola";
 
    try {
        cout << s.at(9) << endl;
        }
    catch(exception& e) {
        cout << e.what() << endl;
    }
 
    cin.get();
    return 0;
}

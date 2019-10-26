#include <iostream>
#include <time.h>

#include "singleton.h"

using namespace std;

int main(int argc,char* argv[]) {

    
		Singleton *singleton = Singleton::getInstance();
		cout << singleton->getTime() << endl;
		
		// Retardo:
		for (long i = 1 ; i <= 20000000 ; i++);
		
		cout << Singleton::getInstance()->getTime() << endl;
        return 0;
}

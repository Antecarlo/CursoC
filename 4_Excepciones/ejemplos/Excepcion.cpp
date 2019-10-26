#include <iostream>
using namespace std;

void myFunction()
{
  try {
    throw "hello";                              // throw a char *
  }
  catch(const char *) {                         // catch a char *
    cout << "Caught char * inside myFunction\n";
    throw ;                                     // rethrow char * out of function
  }                                             // myFunction
}

int main()
{
  cout << "Start\n";

  try{
    myFunction();
  }
  catch(const char *) {
    cout << "Caught char * inside main\n";
  }

  cout << "End";

  return 0;
}

      

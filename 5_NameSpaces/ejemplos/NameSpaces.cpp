#include <iostream>
using namespace std;

namespace MyNameSpace1 {
  int i;
  namespace MyNameSpace2 { // a nested namespace
    int j;
  }
}

int main()
{
  MyNameSpace1::i = 19;

  MyNameSpace1::MyNameSpace2::j = 10;
  cout << MyNameSpace1::i << " "<<  MyNameSpace1::MyNameSpace2::j << "\n";

  using namespace MyNameSpace1;
  cout << endl << i * MyNameSpace2::j << endl;
  return 0;
}

      

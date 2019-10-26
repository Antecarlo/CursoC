#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string input = "abc,def,ghi";
	istringstream ss(input);
	string token;

	while(getline(ss, token, ',')) 
    	cout << token << endl;
	
}


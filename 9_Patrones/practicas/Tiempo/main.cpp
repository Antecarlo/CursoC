/* localtime example */
#include <stdio.h>
#include <time.h>
#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

string getDateTime(){
  time_t rawtime;
  struct tm *timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  string resul = asctime (timeinfo);
  return resul;
}

void retardo(int segundos){
	Sleep(1000);
	//int x  = segundos * 1000;
	//std::this_thread::sleep_for(std::chrono::milliseconds(x));
}

int main (){  
  for (int i = 0 ; i < 5 ; i++){
  	cout << getDateTime() << endl;
  	retardo(1);
  }
  	
  return 0;
}

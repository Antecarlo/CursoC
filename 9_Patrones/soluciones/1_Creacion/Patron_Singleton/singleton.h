#ifndef SINGLETON_H
#define SINGLETON_H

#include <string>
using namespace std;

class Singleton
{
	private:
		static Singleton *instance;
		string fechaHora;
		
	public:
		static Singleton *getInstance();		
		string getTime();
		~Singleton();
		
	protected:
		Singleton();
};

#endif

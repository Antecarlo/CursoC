#ifndef CAJEROFILE_H
#define CAJEROFILE_H

#include<map>
#include<string>
using namespace std;

class CajeroFile
{
	public:
		CajeroFile();
		map<int, int> load(string);
	    bool save(map<int,int>, string);
        	
		
		~CajeroFile();
	protected:
};

#endif

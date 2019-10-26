#ifndef IDIOMASINGLETON_H
#define IDIOMASINGLETON_H

#include <map>
#include <string>
using namespace std;

class IdiomaSingleton
{
	private:
		static IdiomaSingleton *instance;
		map<string,string> mapa;
		string id;
		
	public:
		static const IdiomaSingleton *getInstance(string id);
		string get(string clave) const;
		virtual ~IdiomaSingleton();
		
	protected:
		IdiomaSingleton(string idioma);
};

#endif

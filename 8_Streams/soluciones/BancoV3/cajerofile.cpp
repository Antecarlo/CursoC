#include "cajerofile.h"
#include "bancoexception.h"
#include "util.h"

#include <iostream>
#include <fstream>
#include <vector>
#include<cstdlib>

CajeroFile::CajeroFile()
{
}

map<int, int> CajeroFile::load(string fichero){
	
	fstream f;
    string linea;
    vector<string> campos;
    int tipo, valor;
    map<int, int> billetes;
    // Grabar texto   
    f.open(fichero.c_str(),ios::in);
    if (!f){
            throw BancoException("ERROR al abrir el fichero: " + fichero);
    }
    while (getline(f,linea))
	{
     // cout << linea << endl;    
          campos.clear();
		  split(linea, '=',campos);
          //coge la primera letra
		  tipo=atoi(campos.at(0).c_str());
		  valor=atoi(campos.at(1).c_str());
		  billetes[tipo]=valor;	  
      }
    f.close(); 
    
    //cin.get(); 
	
	return billetes;
	

		
}



bool CajeroFile::save(map<int,int>billetes, string fichero){

fstream f;
    string linea,csv;
    int clave,tipo;
    char aux[50];
    map<int,int>::reverse_iterator it;
    
    // Grabar texto   
    f.open(fichero.c_str(),ios::out);
    if (!f){
         throw BancoException("ERROR al grabar el fichero: " + fichero);
    }
   
   for(it=billetes.rbegin(); it!=billetes.rend(); it++){
   
        clave=it->first; 
        tipo=it->second;
        
        sprintf(aux, "%d", clave);	 //convierte entero a cadena 	
	    csv = string (aux) + "="; 
        
        sprintf(aux, "%d", tipo);	 //convierte entero a cadena 	
	    csv += string (aux);
        
   
        f << csv  << "\n";
        
    }
    f.close(); 
 return true;
 

	
	
}



CajeroFile::~CajeroFile()
{
}

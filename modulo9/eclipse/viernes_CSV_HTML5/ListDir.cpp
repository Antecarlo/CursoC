/*
 * ListDir.cpp
 *
 *  Created on: 18 oct. 2019
 *      Author: antonio
 */

#include "ListDir.h"

#include <cstdlib>
#include <cstdio>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>

#include <stdexcept>

ListDir::ListDir() {
	// TODO Auto-generated constructor stub

}

std::vector<std::string> ListDir::getCSV(std::string origen) {
	std::vector<std::string> ficheros;
	std::string nombreFich,extension;
	int pos;

	/* Con un puntero a DIR abriremos el directorio */
	  DIR *dir;
	  /* en *ent habrá información sobre el archivo que se está "sacando" a cada momento */
	  struct dirent *ent;

	  /* Empezaremos a leer en el directorio actual */
	  dir = opendir (origen.c_str());

	  /* Miramos que no haya error */
	  if (dir == NULL)
		 throw std::invalid_argument("Directorio no valido...");
	    //puts("No puedo abrir el directorio");

	  /* Una vez nos aseguramos de que no hay error, ¡vamos a jugar! */
	  /* Leyendo uno a uno todos los archivos que hay */
	  while ((ent = readdir (dir)) != NULL){
	      /* Nos devolverá el directorio actual (.) y el anterior (..), como hace ls */
	      if ( (strcmp(ent->d_name, ".")!=0) && (strcmp(ent->d_name, "..")!=0) ){
	      /* Una vez tenemos el archivo, lo pasamos a una función para procesarlo. */
	      //puts(ent->d_name);
	    	  nombreFich=std::string(ent->d_name);

	    	  //Si extension CSV se queda en el vector
	    	  pos=nombreFich.find_last_of('.');
	    	  if(pos != -1){
	    		  extension=nombreFich.substr(pos);
	    		  if(extension == ".csv" || extension == ".CSV")
	    			  ficheros.push_back(origen+"/"+nombreFich);
	    	  }
	      }
	    }
	  closedir (dir);
	  return ficheros;
}

ListDir::~ListDir() {
	// TODO Auto-generated destructor stub
}


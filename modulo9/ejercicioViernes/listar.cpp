#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>



int main()
{
  /* Con un puntero a DIR abriremos el directorio */
  DIR *dir;
  /* en *ent habrá información sobre el archivo que se está "sacando" a cada momento */
  struct dirent *ent;

  /* Empezaremos a leer en el directorio actual */
  dir = opendir (".");

  /* Miramos que no haya error */
  if (dir == NULL)
    puts("No puedo abrir el directorio");
 
  /* Una vez nos aseguramos de que no hay error, ¡vamos a jugar! */
  /* Leyendo uno a uno todos los archivos que hay */
  while ((ent = readdir (dir)) != NULL)
    {
      /* Nos devolverá el directorio actual (.) y el anterior (..), como hace ls */
      if ( (strcmp(ent->d_name, ".")!=0) && (strcmp(ent->d_name, "..")!=0) )
    {
      /* Una vez tenemos el archivo, lo pasamos a una función para procesarlo. */
      puts(ent->d_name);
    }
    }
  closedir (dir);

  return EXIT_SUCCESS;
}

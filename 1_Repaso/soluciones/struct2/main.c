#include <stdio.h>
#include <stdlib.h>

// Fecha: dia, mes y año:
typedef struct fecha {
        int dia, mes, anyo;
} TFecha;


// Persona: nombre, apellidos, fecha de nacimiento:
typedef struct persona {
        char nombre[20];
        char apellidos[20];
        TFecha fecha;
} TPersona;            


int main(int argc, char *argv[])
{
  TPersona p;
  TFecha f;
  
  p.fecha.dia = 30;
  p.fecha.mes = 4;
  p.fecha.anyo = 2008;
  
  printf("Fecha: %02d\\%02d\\%02d \n", p.fecha.dia, p.fecha.mes, p.fecha.anyo);
  
  return 0;
}

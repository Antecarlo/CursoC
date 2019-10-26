/*
Modulo 1

Conversiones de cadenas a numeros. Y de numeros a cadena.

atoi, atof, atol -> stdlib.h

Array to integer

sprintf

*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void convertir_a_cadena(){
	int numero=5678;
	char s[50];

	sprintf(s,"%d",numero);
	printf("\nEl numero como texto: %s y tiene %ld cifras\n",s,strlen(s));

}

void convertir_a_numero(){
	int numero;
	double real;
	long largo;
	char s[50]={"12300"};

	numero=atoi(s);
	numero++;
	printf("\nEL numero convertido: %d",numero);

	strcpy(s,"34.789");
	real=atof(s);
	printf("\nEl numero real es: %g",real);

	strcpy(s,"1234567890000");
	largo=atol(s);
	printf("\nEl numero largo es: %ld",largo);
}

void leer_y_convertir(){
	char s[50];
	int numero;

	puts("\nDame numero");
	fgets(s,50,stdin);
	numero=atoi(s);
	printf("\nNumero leido: %d",numero);
}

void convertir_real_a_entero(){
	float real=89.0078;
	int numero;

	//Queremos obtener la parte entera del numero: aplicamos un casting
	numero=(int)real;
	printf("\nLa parte entera es: %d\n",numero);
}

void decimal_horas(float hdecimal){
	int horas, minutos, segundos;
	float decimal;

	horas=(int)hdecimal;
	decimal=hdecimal-horas;
	minutos=(int)(decimal*60);
	segundos=(int)((decimal*60)-minutos);

	printf("\nEl decimal %f equivale a las %02d:%02d:%02d\n",hdecimal, horas, minutos,segundos);

	float horaD=((float)((float)(segundos/60)+minutos)/60)+horas;
	printf("\nLa hora en decimal reconstruida es %f\n",horaD);
	
}

float getHoraReal(int h, int m, int s){
	float horaD=(s/3600.0)+(m/60.0)+h;
	//float horaD=((float)(m/60))+((float)(s/60))+h;
	return horaD;
}

void getHMS(double horas,int *hora,int *minutos,int *segundos){
	float decimal;

	*hora=(int)horas;
	decimal=horas-*hora;
	*minutos=(int)(decimal*60);
	*segundos=(int)((decimal*60)-*minutos);
}

char getHMS2(char *s,int horas, int minutos, int segundos){
	
	sprintf(s,"%02d:%02d:%02d",horas,minutos,segundos);
}

int main(){
	
	/*
	leer_y_convertir();
	convertir_a_numero();
	convertir_a_cadena();
	convertir_real_a_entero();
	
	decimal_horas(3.67);
	*/

	//Funciones de transformacion de horas
	double horas=3.67;
	int hora,minutos,segundos;

	float horaReal=getHoraReal(3,40,7);
	printf("Hora real: %f",horaReal);

	getHMS(horas,&hora,&minutos,&segundos);
	printf("\nEl decimal %f equivale a las %02d:%02d:%02d\n",horas, hora, minutos,segundos);
	
	char s[50];
	getHMS2(s,hora,minutos,segundos);
	printf("La hora por pantalla es %s\n",s);
}




#include "appagendaconsola.h"

AppAgendaConsola::AppAgendaConsola()
{
}

void AppAgendaConsola::menu()
{
	int op;
	string nombreAgenda;
	
	cout << "Nombre agenda: ";
	cin >> nombreAgenda;
	agFile.setNombre(nombreAgenda);
	agFile.leer(ag);
	do {
		cout << "Menu" << endl;
		cout << "1. Añadir evento" << endl;
		cout << "2. Listar dia" << endl;
		cout << "3. Listar Agenda" << endl;
		cout << "4. Grabar agenda" << endl;
		cout << "5. Borrar evento" << endl;
		cout << "6. Borrar Dia" << endl;
		cout << "7. Salir" << endl;
		cout << "Opcion:";
		cin >> op;
		switch(op){
			case 1:
				addEvento();
				break;
			case 3:
				listarAgenda();
				break;
		}
	} while (op != 7);
	agFile.grabar(ag);
}

void AppAgendaConsola::addEvento(){
	string fecha, hora, evento;
	
	cout << "Introduce los datos:" << endl;
	cout << "Fecha:";
	cin >> fecha;
	cout << "Hora:";
	cin >> hora;
	cout << "Evento:";
	cin >> evento;
	
	ag.addEvento(Date(fecha), Hora(hora), evento);
}

void AppAgendaConsola::listarAgenda(){
	ag.listarAgenda();
}

AppAgendaConsola::~AppAgendaConsola()
{
}

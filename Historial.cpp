#include <fstream>
#include <iostream>
#include <string>
#include "Historial.h"
using namespace std;

Historial::Historial(){}
//Historial se encarga de tomar ciertos datos (nombre, ID y titulo de libro para añadirlos a un historial .txt)
void Historial::setHistorial(string _name, string _ID, string _title) {
	name = _name;
	ID = _ID;
	title = _title;

};

void Historial::EscribirHistorial(){
	
	std::ofstream history;
	history.open("C:/Users/ethan/source/repos/Biblio/Biblio/historial.txt", std::ios_base::app);
	history << "El usuario " <<name + " \n";
	history << "De matricula " << ID + " \n";
	history << "Devolvio el documento " << title + " \n";
	history << "===============" <<" \n";
	history.close();

}

void Historial::LeerHistorial() {
	fstream file;
	file.open("C:/Users/ethan/source/repos/Biblio/Biblio/historial.txt", ios::in);

	if (file.is_open()) {
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}
	}
}

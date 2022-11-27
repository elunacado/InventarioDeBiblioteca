#include "Adder.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

Adder::Adder() {};

void Adder::setAdder(string _tipo,string _titulo, string _autor, string _estado, bool _status) {
	tipo = _tipo;
	titulo = _titulo;
	autor = _autor;
	estado = _estado;
	status = _status;

};

void Adder::Add() {
	
	if (estado == "1") {
		status = false;
	} else {
		status = true;
	}

	if (tipo == "1") {
		tipo = "ensayo";
	} else {
		tipo = "book";
	}

	std::ofstream file;
	file.open("C:/Users/ethan/source/repos/Biblio/Biblio/inventario.txt", std::ios_base::app);
	file << titulo + " \n";
	file << autor + " \n";
	if (status == false) {
		file << "seminuevo \n";

	}
	else {
		file << "nuevo \n";
	}
	file << tipo + " \n";
	file << "===============";
	file.close();
};

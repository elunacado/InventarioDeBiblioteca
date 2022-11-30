#pragma once
#include <sstream>

using namespace std;

class Adder {

private:
	//propiedades de la clase Adder
	string tipo;
	string titulo;
	string autor;
	string estado;
	bool status;
	
public:
	//metodos de la clase
	inline Adder();
	inline void setAdder(string, string, string, string, bool);
	inline void Add();



};

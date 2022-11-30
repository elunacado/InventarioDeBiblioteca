#pragma once
#include <sstream>

using namespace std;

class Historial
{
private:
	//propiedades de la clase Historial
	string name;
	string ID;
	string title;

public:
	//metodos de la clase

	inline Historial();
	inline void setHistorial(string, string, string);
	inline void EscribirHistorial();
	inline void LeerHistorial();
};

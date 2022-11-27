#pragma once
#include <sstream>

using namespace std;

class Historial
{
private:

	string name;
	string ID;
	string title;

public:
	inline Historial();
	inline void setHistorial(string, string, string);
	inline void EscribirHistorial();
	inline void LeerHistorial();
};

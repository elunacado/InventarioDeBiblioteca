#pragma once
#include <sstream>

using namespace std;

class Adder {

private:
	string tipo;
	string titulo;
	string autor;
	string estado;
	bool status;
	
public:
	inline Adder();
	inline void setAdder(string, string, string, string, bool);
	inline void Add();



};
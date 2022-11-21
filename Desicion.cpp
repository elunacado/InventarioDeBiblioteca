#include "Desicion.h"
#include "Files.cpp"
#include "Book.cpp"

using namespace std;

Desicion::Desicion() {};

Desicion::Desicion(int desicion_) {
	desicion = desicion_;
};

void Book::setStatus(bool estado_) {
	estado = estado_;
};

bool Book::getStatus() {
	
	if (estado == true)
		estado=false;
		
	else
		estado = true;

	return estado;
			
}


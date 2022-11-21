#include "Book.h"
using namespace std;

Book::Book() {};


Book::Book(string titulo_, string autor_,bool estado_) {
    titulo = titulo_;
    autor = autor_;
    estado = estado_;

};

void Book::setStatus(bool estado_) {
    estado = estado_;
};

bool Book::getStatus() {
    return estado;
}


string Book::showBookInfo() {
    stringstream aux;
    if (estado == true)
        aux << titulo << endl << autor << endl << "Estado: DISPONIBLE" << endl;
    else 
        aux << titulo << endl << autor << endl << "Estado: PRESTADO" << endl;
    return aux.str();
}

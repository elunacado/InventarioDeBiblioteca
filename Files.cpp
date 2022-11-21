#include "Files.h"


Files::Files() {}

void Files::agregarLibro(Book book, int posicion/*, string, string*/) {
    books[posicion] = book;
}

string Files::bookStatus() {
    stringstream aux;
    for (int i = 0; i < 10; i++) {
        aux <<"ID: "<< i << endl << books[i].showBookInfo() << endl;
    }
    return aux.str();
}

string Files::getFilesInfo() {
    stringstream aux;
    aux << bookStatus() << endl;
    //aux << "Movies " << movies << endl;
    //aux << "Essay> " << essays << endl;


    return aux.str();
}
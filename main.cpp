#include <iostream>
#include "Files.cpp"
#include "User.cpp"


using namespace std;

int main() {	
	string name;
	string ID;
	int desicion;

	Files bookfile;

	cout << "Hi tell me your name pls: ";
	cin >> name;
	cout << "Tell me your student ID : ";
	cin >> ID;
	
	User user(name, ID);
	cout << user.getUserInfo()<<endl;
	

	bookfile.agregarLibro(Book("TITULO: El problema de los 3 cuerpos ", "AUTOR: Ci Xin Liu ", false), 0);
	bookfile.agregarLibro(Book("TITULO: El bosque obscuro ", "AUTOR: Ci Xin Liu ", true), 1);
	bookfile.agregarLibro(Book("TITULO: El fin de la muerte ", "AUTOR: Ci Xin Liu ", false), 2);
	bookfile.agregarLibro(Book("TITULO: IT ", "AUTOR: Stephen King ", true), 3);
	bookfile.agregarLibro(Book("TITULO: Hamlet ", "AUTOR: William Shakespeare ", false), 4);
	bookfile.agregarLibro(Book("TITULO: El principito ", "AUTOR: Antoine de Saint-Exupéry ", true), 5);
	bookfile.agregarLibro(Book("TITULO: Las mil y una noches ", "AUTOR: DESCONOCIDO ", false), 6);
	bookfile.agregarLibro(Book("TITULO: Don Quijote de la Mancha ", "AUTOR: Miguel de Cervantes ", true), 7);
	bookfile.agregarLibro(Book("TITULO: Orgullo y prejuicio ", "AUTOR: Jane Austen ", false), 8);
	bookfile.agregarLibro(Book("TITULO: Frankenstein ", "AUTOR: Mary Shelley ", true),9);
	
	cout << bookfile.getFilesInfo() << endl;
	cout << "Introduce el ID del libro que quieres devolver o retirar";

}
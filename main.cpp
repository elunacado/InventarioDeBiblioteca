//Inclusion de archivos
#include "Adder.cpp"
#include "Reader.cpp"
#include "Historial.cpp"
#include "Librarian.cpp"
#include "Borrower.cpp"
#include <iostream>

//implementaciones para que el codigo funcione
using namespace std;

int main() {
	//variables necesarias para el funcionamiento del programa
	string username;
	string password;
	string ID;
	string MenuDecision;
	string correct = "230804";
	bool admin = true;
	int desicion;

	//llamamos a las clases
	Librarian librarian;
	Borrower borrower;
	Adder adder;
	Reader read;
	Historial historial;


	//obtenemos la info del usuario
	cout << "Hola Bienvenid@ al registrador de libros por favor ingresa tu nombre para el registro: ";
	cin >> username;
	cout << "Y tu matricula tambien para el registro: ";
	cin >> ID;
	cout << "¿Eres un bibliotecario? " << endl << "1. Si" << endl << "2. No, soy un estudiante"<<endl;
	cin >> MenuDecision;

	//inicia el programa de consola de 
	while (true)
	{
		string tipo;
		string titulo;
		string autor;
		string estado;

		//el usuario decide si es un bibliotecario o usuario
		if (MenuDecision == "1") {
			cout << "Si de verdad eres un bibliotecario ingresa la contraseña secreta (230804) ";
			cin >> password;

			librarian.PasswordChecker();
			if (librarian.getAdmin() == true) {
				//MENU DE BIBLIOTECARIO
				cout << "Hola bibliotecario " << librarian.getUserName() << endl;
				cout << "1. Agrega un documento:" << endl
					<< "2. Dime el inventario de la biblioteca " << endl
					<< "3. Dime el historial de los cambios en la biblioteca " << endl
					<< "4. Salir " << endl;
			}
		}
		else {
			//MENU DE USUARIO
			cout << "Hola usuario " << borrower.getUserName() << endl;
			cout << "1. Agrega un documento:" << endl
				<< "2. Dime el inventario de la biblioteca " << endl
				<< "4. Salir " << endl;

		}
		//recibe la decision del segundo menu
		cin >> desicion;



		//La decision 1 es la de añadir algun libro a la biblioteca
		if (desicion == 1) {

			int n = 2;
			bool status = true;
			cout << "Que tipo de documeto es " << endl << "1.Ensayo " << endl << "2. Libro " << endl;
			cin >> tipo;
			cout << "Dime el titulo del documento (En lugar de espacios utilizar guiones bajos) " << endl;
			cin >> titulo;
			cout << "Dime el autor del documento (En lugar de espacios utilizar guiones bajos) " << endl;
			cin >> autor;
			cout << "Dime el estado del documento" << endl << "1. Seminuevo" << endl << "2.Nuevo" << endl;
			cin >> estado;
			adder.setAdder(tipo, titulo, autor, estado, status);
			historial.setHistorial(username, ID, titulo);
			historial.EscribirHistorial();
			adder.Add();
			cout << "Se registro el documento!" << endl;


		}
		//La segunda es la de leer el archivo de la biblioteca
		else if (desicion == 2) {

			read.ReadFiles();
		}
		else if (desicion == 3 && librarian.PasswordChecker() == true) {
			historial.LeerHistorial();
		}
		else if (desicion == 4 && librarian.PasswordChecker() == true) {
			cout << "Hasta luegooooo";
			break;

		}
		else if (desicion == 3 && librarian.PasswordChecker()==false) {
			cout << "Hasta luegooooo";
			break;
		}
		else {
			cout << "Eliige una opcion valida";
		};
	};
	}

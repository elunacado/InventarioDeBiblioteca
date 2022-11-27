#include "Adder.cpp"
#include "PasswordManager.cpp"
#include "Reader.cpp"
#include "Historial.cpp"
#include <iostream>

using namespace std;

int main() {
	string username;
	string pass;
	string ID;
	string correct = "230804";
	bool admin = true;
	int desicion;

	Adder adder;
	Reader read;
	Historial historial;

	

	cout << "Hola Bienvenid@ al registrador de libros por favor ingresa tu nombre para el registro: ";
	cin >> username;
	cout << "Y tu matricula tambien para el registro: ";
	cin >> ID;
	cout << "Si eres un admin ingresa la contraseña si eres un usuario ingresa cualquier cosa " << endl << "la contraseña del admin es 230804"<<endl;
	cin >> pass;

	PasswordManager password(username,ID,pass,correct,admin);
	cout<<password.getUserName()<<endl<<password.getID() << endl <<password.getPassword() << endl <<password.giveUserInfo() << endl;
	while (true)
	{
		string tipo;
		string titulo;
		string autor;
		string estado;
		
		if (password.PasswordChecker()==1) {
			cout << "Hi admin " << password.getUserName() <<endl;
			cout << "1. Agrega un documento:" << endl
				<< "2. Dime el inventario de la biblioteca " << endl
				<< "3. Dime el historial de los cambios en la biblioteca " << endl
				<< "4. Salir " << endl;

		}
		else {
			cout << "Hi user " << password.getUserName() << endl;
			cout << "1. Agrega un documento:" << endl
				<< "2. Dime el inventario de la biblioteca " << endl
				<< "3. Salir " << endl;

		}
		
		cin >> desicion;




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

		else if (desicion == 2) {

			read.ReadFiles();
		}
		else if (desicion == 3 && password.getAdmin() == 1){
			historial.LeerHistorial();
		}
		else if (desicion == 3 && password.getAdmin() == 0) {
			cout << "Hasta luegooooo";
			break;
		}
		else if (desicion == 4 && password.getAdmin() == 1) {
			cout << "Hasta luegooooo";
			break;

		}
		else {
			cout << "Eliige una opcion valida";
		};
	}
}

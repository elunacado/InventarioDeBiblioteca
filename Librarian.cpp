#include "Librarian.h"


Librarian::Librarian() {
	password = "";
};

//El librarion es igual al borrower salvo que este tiene acceso al historial de cambios

Librarian::Librarian(string _username, string _ID, string _correct, string _password,bool _admin) :User(_username, _ID) {
	
	password = _password;
	admin = _admin;
	correct = _correct;



}



string Librarian::getPassword(){
	return password;


};
bool Librarian::PasswordChecker() {
	if (password == correct) {
		admin = true;
	}
	else {
		admin = false;
	}
	return admin;
};

bool Librarian::getAdmin() {
	return admin;
}
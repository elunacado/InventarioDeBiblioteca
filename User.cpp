#include "User.h"

User::User() {}
//La superclase user le da los valores de username y ID a librarian y a borrower mediante el uso de herencia
User::User(string username_, string ID_) {
    username = username_;
    ID = ID_;
	
}

string User::giveUserInfo() {
    stringstream aux;
    aux << "Welcome:  " << username << endl;
    aux << "Your Student ID  is: " << ID << endl;
   
    return aux.str();
}

string User::getUserName() {
    return username;
}

string User::getID() {
    return ID;
}


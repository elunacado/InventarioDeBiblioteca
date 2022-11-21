#include "User.h"

User::User() {}

User::User(string username_, string ID_) {
    stringstream aux;
    username = username_;
    ID = ID_;
};

string User::getUserInfo() {
    stringstream aux;
    aux << "Welcome:  " << username << endl;
    aux << "Your Student ID  is: " << ID << endl;
    return aux.str();
}

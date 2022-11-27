#include "PasswordManager.h"

PasswordManager::PasswordManager() { 
	password = ""; 
};

PasswordManager::PasswordManager(string _username, string _ID, string _password, string _correct, bool _admin):User(_username, _ID) {
	password = _password;
	correct = _correct;
	admin = _admin;
}

string PasswordManager::getPassword() {
	return password;
	

};
bool PasswordManager::PasswordChecker() {
	if (password == correct) {
		admin = true;
	}
	else {
		admin = false;
	}
	return admin;
};

bool PasswordManager::getAdmin() {
	return admin;
}
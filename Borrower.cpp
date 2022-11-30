#include "Borrower.h"
#include <iostream>

using namespace std;

//Borrower es el usuario comun que regresa un libro

Borrower::Borrower() { };

Borrower::Borrower(string _username, string _ID) : User(_username, _ID) {

}
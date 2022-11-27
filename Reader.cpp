#include "Reader.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

Reader::Reader() {};

void Reader::ReadFiles() {

	fstream file;
	file.open("C:/Users/ethan/source/repos/Biblio/Biblio/inventario.txt", ios::in);
	
	if (file.is_open()) {
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}
	}
}


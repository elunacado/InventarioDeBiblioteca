#include "User.h"

class Librarian : public User {

private:
	//propiedades de la clase Librarian
	string correct;
	string password;
	bool admin;

public:
	//metodos de la clase
	inline Librarian();
	inline Librarian(string _username, string _ID, string _correct,string _password, bool _admin);
	inline string getPassword();
	inline bool getAdmin();
	inline bool PasswordChecker();

};


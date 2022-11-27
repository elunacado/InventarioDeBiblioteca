#include "User.h"

class PasswordManager: public User
{
private:
	string password;
	string correct;
	bool admin;

public:
	inline PasswordManager();
	inline PasswordManager(string _username, string _ID, string _password,string _correct,bool _admin);
	inline bool PasswordChecker();
	inline string getPassword();
	inline bool getAdmin();
	

};


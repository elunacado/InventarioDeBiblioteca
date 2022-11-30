#ifndef User_HEADER
#define User_HEADER

#include <sstream>
#include <iostream>
using namespace std;


class User {
    private:
        //propiedades de la clase User
        string username;
        string ID;
     
    public:
        //metodos de la clase
        User();
        User(string, string);
        string giveUserInfo();
        string getUserName();
        string getID();
        
        
        
};

#endif

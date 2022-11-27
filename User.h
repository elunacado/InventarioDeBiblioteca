#include <sstream>
#include <iostream>
using namespace std;


class User {
    private:
        string username;
        string ID;
     

    public:
        User();
        User(string, string);
        string giveUserInfo();
        string getUserName();
        string getID();
        
};



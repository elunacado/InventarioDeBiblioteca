#include <sstream>

using namespace std;

class User {
    private:
        string username;
        string ID;

    public:
        inline User();
        inline User(string, string);
        inline string getUserInfo();
};



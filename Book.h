#include <sstream>

using namespace std;

class Book
{
private:
    string titulo;
    string autor;
    bool estado;

public:
    inline Book();
    inline Book(string, string, bool);
    inline void setStatus(bool);
    inline bool getStatus();
    inline string showBookInfo();

};



#pragma once
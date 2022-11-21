#include "Book.cpp"

using namespace std;

class Files
{
private:
    Book books[10];
    //string movies[10];
    //string essays[5];

public:
    inline Files();
    inline void agregarLibro(Book, int);
    inline string bookStatus();
    inline string getFilesInfo();
};



#pragma once

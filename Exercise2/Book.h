#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include "Paper.h"
using namespace std;

class Book:public Paper
{
private:
    string author, type;
    int page;
public:
    Book();
    string getType();
    string getAuthor();
    int getPage();
    void setPaper();
    void getPaper();
};

#endif // BOOK_H

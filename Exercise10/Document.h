#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>
#include <string.h>
using namespace std;

class Document
{
private:
    string text;
public:
    Document();
    Document(string);
    int countWord();
    int countA();
    string Standardlize();
};

#endif // DOCUMENT_H

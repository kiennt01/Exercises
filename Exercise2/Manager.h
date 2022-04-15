#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <vector>
#include "Paper.h"
#include "Book.h"
#include "Magazine.h"
#include "Newpaper.h"
using namespace std;

class Manager
{
public:
    void addPaper(vector<Paper*> &);
    void printPaper(vector<Paper*> &);
    int deletePaper(vector<Paper*> &);
    void searchPaper(vector<Paper*>);
};

#endif // MANAGER_H

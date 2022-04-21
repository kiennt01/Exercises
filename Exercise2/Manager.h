#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <memory>
#include <vector>
#include "Paper.h"
#include "Book.h"
#include "Magazine.h"
#include "Newpaper.h"
using namespace std;

class Manager
{
public:
    void addPaper(vector<unique_ptr<Paper>> &);
    void printPaper(vector<unique_ptr<Paper>> &);
    int deletePaper(vector<unique_ptr<Paper>> &);
    void searchPaper(vector<unique_ptr<Paper>>);
};

#endif // MANAGER_H

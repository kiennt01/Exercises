#ifndef MAGAZINE_H
#define MAGAZINE_H
#include <iostream>
#include "Paper.h"
using namespace std;

class Magazine:public Paper
{
private:
    int releaseNo, releaseMonth;
    string type;
public:
    Magazine();
    string getType();
    int getReleaseNo();
    int getReleaseMonth();
    void setPaper();
    void getPaper();
};

#endif // MAGAZINE_H

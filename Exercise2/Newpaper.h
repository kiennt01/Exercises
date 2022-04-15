#ifndef NEWPAPER_H
#define NEWPAPER_H
#include <iostream>
#include "Paper.h"
using namespace std;

class Newpaper :public Paper
{
private:
    int releaseDate;
    string type;
public:
    Newpaper();
    string getType();
    int getReleaseDate();
    void setPaper();
    void getPaper();
};

#endif // NEWPAPER_H

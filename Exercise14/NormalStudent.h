#ifndef NORMALSTUDENT_H
#define NORMALSTUDENT_H
#include <iostream>
#include "Student.h"
using namespace std;

class NormalStudent:public Student
{
private:
    string level;
    int englishScore, entryScore;
public:
    int getToeic();
    int getEntry();
    string getLevel();
    void setInfo();
    void getInfo();
};

#endif // NORMALSTUDENT_H

#ifndef GOODSTUDENT_H
#define GOODSTUDENT_H
#include <iostream>
#include "Student.h"
using namespace std;

class GoodStudent:public Student
{
private:
    int gpa;
    string reward;
    string level;
public:
    GoodStudent();
    int getGPA();
    string getLevel();
    string getReward();
    void setInfo();
    void getInfo();
};

#endif // GOODSTUDENT_H

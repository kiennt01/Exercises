#ifndef EXPERIENCE_H
#define EXPERIENCE_H
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Certificate.h"
using namespace std;

class Experience:public Employee, public Certificate
{
private:
    int expInyear, cer;
    string proSkill, type;
    vector<Certificate> certi;
public:
    Experience();
    int getExpYear();
    int getCer();
    string getProSkill();
    string getEmployeeType();
    void setInfo();
    void getInfo();
};

#endif // EXPERIENCE_H

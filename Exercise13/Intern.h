#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Certificate.h"
using namespace std;

class Intern:public Employee, public Certificate
{
private:
    string major, university, type;
    int semester, cer;
    vector<Certificate> certi;
public:
    Intern();
    string getMajor();
    string getUniversity();
    string getEmployeeType();
    int getSemester();
    int getCer();
    void setInfo();
    void getInfo();
};

#endif // INTERN_H

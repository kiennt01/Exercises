#ifndef FRESHER_H
#define FRESHER_H
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Certificate.h"

using namespace std;

class Fresher:public Employee, public Certificate
{
private:
    int gradDate, rank, cer;
    string edu, type;
    vector<Certificate> certi;
public:
    Fresher();
    int getGradDate();
    int getRank();
    string getEdu();
    int getCer();
    string getEmployeeType();
    void setInfo();
    void getInfo();
};

#endif // FRESHER_H

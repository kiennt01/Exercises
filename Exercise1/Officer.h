#ifndef OFFICER_H
#define OFFICER_H
#include <iostream>
using namespace std;

class Officer
{
private:
    string name, gender, address;
    int age;
public:
    string getName();
    int getAge();
    string getGender();
    string getAddress();
    virtual void setOfficer();
    virtual void getOfficer();
};

#endif // OFFICER_H

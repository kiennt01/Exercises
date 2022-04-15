#ifndef CITIZEN_H
#define CITIZEN_H
#include <iostream>
using namespace std;

class Citizen
{
private:
    string name, job;
    int age, id;
public:
    string getName();
    string getJob();
    int getAge();
    int getId();
    virtual void setCitizen();
    virtual void getCitizen();
};

#endif // CITIZEN_H

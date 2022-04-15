#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include "Officer.h"
using namespace std;

class Staff : public Officer
{
private:
    string task;
public:
    string getTask();
    void setOfficer();
    void getOfficer();
};


#endif // STAFF_H

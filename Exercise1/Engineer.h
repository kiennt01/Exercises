#ifndef ENGINEER_H
#define ENGINEER_H
#include <iostream>
#include "Officer.h"
using namespace std;

class Engineer : public Officer
{
private:
    string major;
public:
    string getMajor();
    void setOfficer();
    void getOfficer();
};
#endif // ENGINEER_H

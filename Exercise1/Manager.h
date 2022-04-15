#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <vector>
#include "Officer.h"
#include "Worker.h"
#include "Staff.h"
#include "Engineer.h"
using namespace std;
class Manager
{
private:
    string task;
public:
    string getTask();
    void addOfficer(vector<Officer*>&);
    void printOfficer(vector<Officer*>&);
    void searchOfficer(vector<Officer*> list);
};

#endif // MANAGER_H

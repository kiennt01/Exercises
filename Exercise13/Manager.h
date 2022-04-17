#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Experience.h"
#include "Intern.h"
#include "Fresher.h"
#include "Certificate.h"

class Manager
{
private:

public:
    void addEmployee(vector<Employee*>&);
    void printCandidate(vector<Employee*>);
    void editCandidate(vector<Employee*>&);
    void sortCandidate(vector<Employee*>);
};

#endif // MANAGER_H

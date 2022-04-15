#ifndef TOWN_H
#define TOWN_H
#include <iostream>
#include <vector>
#include "Citizen.h"
#include "Family.h"

using namespace std;

class Town
{
public:
    void addCitizen(vector<Citizen*> &);
    void printCitizen(vector<Citizen*>);
};

#endif // TOWN_H

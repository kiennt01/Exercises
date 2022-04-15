#ifndef FAMILY_H
#define FAMILY_H
#include <iostream>
#include <vector>
#include "Citizen.h"
using namespace std;

class Family:public Citizen
{
private:
    int member, address;
    vector<Citizen> info;
public:
    int getMember();
    int getAddress();
    void setCitizen();
    void getCitizen();
    void addCitizen(vector<Citizen*>&);
};

#endif // FAMILY_H

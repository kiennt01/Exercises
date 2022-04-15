#ifndef ROOMB_H
#define ROOMB_H
#include <iostream>
#include "Customer.h"
using namespace std;

class RoomB:public Customer
{
private:
    int cost, day;
public:
    RoomB();
    int getCost();
    int getDay();
    void setCustomer();
    void getCustomer();
};

#endif // ROOMB_H

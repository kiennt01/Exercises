#ifndef ROOMA_H
#define ROOMA_H
#include <iostream>
#include "Customer.h"
using namespace std;

class RoomA:public Customer
{
private:
    int cost, day;
public:
    RoomA();
    int getCost();
    int getDay();
    void setCustomer();
    void getCustomer();
};

#endif // ROOMA_H

#ifndef ROOMC_H
#define ROOMC_H
#include <iostream>
#include "Customer.h"
using namespace std;

class RoomC:public Customer
{
private:
    int cost, day;
public:
    RoomC();
    int getCost();
    int getDay();
    void setCustomer();
    void getCustomer();
};

#endif // ROOMC_H

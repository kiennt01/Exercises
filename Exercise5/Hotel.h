#ifndef HOTEL_H
#define HOTEL_H
#include <iostream>
#include <vector>
#include "Customer.h"
#include "RoomA.h"
#include "RoomB.h"
#include "RoomC.h"
using namespace std;

class Hotel
{
private:
    int cost;
public:
    void addCustomer(vector<Customer*>&);
    void deleteCustomer(vector<Customer*>&);
    void Cost(vector<Customer*>);
};

#endif // HOTEL_H

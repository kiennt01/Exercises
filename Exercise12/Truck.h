#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "Vehicle.h"
using namespace std;
class Truck:public Vehicle
{
private:
    int load;
public:
    int getLoad();
    void setInfo();
    void getInfo();
};

#endif // TRUCK_H

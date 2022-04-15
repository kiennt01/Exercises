#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Motorbike:public Vehicle
{
private:
   int power;
public:
    int getPower();
    void setInfo();
    void getInfo();
};

#endif // MOTORBIKE_H

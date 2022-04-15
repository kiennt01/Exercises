#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car:public Vehicle
{
private:
    int seat;
    string engine;
public:
    int getSeat();
    string getEngine();
    void setInfo();
    void getInfo();
};

#endif // CAR_H

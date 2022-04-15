#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;

class Vehicle
{
private:
    int id, prodYear, price;
    string brand, color;
public:
    int getId();
    int getProdyear();
    int getPrice();
    string getBrand();
    string getColor();
    virtual void setInfo();
    virtual void getInfo();
};

#endif // VEHICLE_H

#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Truck.h"

class Manager
{
public:
    void addVehicle(vector<Vehicle*>&);
    void printVehicle(vector<Vehicle*>&);
    void deleteVehicle(vector<Vehicle*>&);
    void searchBrand(vector<Vehicle*>);
    void searchColor(vector<Vehicle*>);
};

#endif // MANAGER_H

#include "Truck.h"

int Truck::getLoad()
{
    return load;
}
void Truck::setInfo()
{
    Vehicle::setInfo();
    cout << "Enter the maximum load the truck can take: " ;
    while (cin >> this->load && (this->load < 0))
    {
        cout << "Invalid load. Type again: ";
    }
}
void Truck::getInfo()
{
    Vehicle::getInfo();
    cout << "Load: " << getLoad() << endl;
}

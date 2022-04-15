#include "Motorbike.h"

int Motorbike::getPower()
{
    return power;
}
void Motorbike::setInfo()
{
    Vehicle::setInfo();
    cout << "Enter power of motorbike: ";
    while(cin >> this->power && (this->power < 0))
    {
        cout << "Invalid power. Type again: ";
    }
}
void Motorbike::getInfo()
{
    Vehicle::getInfo();
    cout << "Power: " << getPower() << endl;
}

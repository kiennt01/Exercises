#include "Car.h"

int Car::getSeat()
{
    return seat;
}
string Car::getEngine()
{
    return engine;
}
void Car::setInfo()
{
    Vehicle::setInfo();
    cout << "Enter the number of seat: ";
    while (cin >> this->seat && (this->seat < 0))
    {
        cout << "Invalid seat. Type again: ";
    }
    cout << "Enter the type of engine: ";
    cin.ignore();
    getline(cin, this->engine);
}
void Car::getInfo()
{
    Vehicle::getInfo();
    cout << "Number of seat: " << getSeat() << endl << "Type of engine: " << getEngine() << endl;
}

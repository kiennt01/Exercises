#include "RoomC.h"

RoomC::RoomC()
{
    this->cost = 100;
}
int RoomC::getCost()
{
    return cost;
}
int RoomC::getDay()
{
    return day;
}
void RoomC::setCustomer()
{
    Customer::setCustomer();
    cout << "Enter the number of day customer use: ";
    cin >> this->day;
}
void RoomC::getCustomer()
{
    cout << "Room type C" << endl;
    cout << "Number of day rent: " << getDay() << endl;
    Customer::getCustomer();
}

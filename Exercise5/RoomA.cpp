#include "RoomA.h"

RoomA::RoomA()
{
    this->cost = 500;
}
int RoomA::getCost()
{
    return cost;
}
int RoomA::getDay()
{
    return day;
}
void RoomA::setCustomer()
{
    Customer::setCustomer();
    cout << "Enter the number of day customer use: ";
    cin >> this->day;
}
void RoomA::getCustomer()
{
    cout << "Room type A" << endl;
    cout << "Number of day rent: " << getDay() << endl;
    Customer::getCustomer();
}

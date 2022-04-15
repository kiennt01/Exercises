#include "RoomB.h"

RoomB::RoomB()
{
    this->cost = 300;
}
int RoomB::getCost()
{
    return cost;
}
int RoomB::getDay()
{
    return day;
}
void RoomB::setCustomer()
{
    Customer::setCustomer();
    cout << "Enter the number of day customer use: ";
    cin >> this->day;
}
void RoomB::getCustomer()
{
    cout << "Room type B" << endl;
    cout << "Number of day rent: " << getDay() << endl;
    Customer::getCustomer();
}

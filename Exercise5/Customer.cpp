#include "Customer.h"


string Customer::getName()
{
    return name;
}
int Customer::getAge()
{
    return age;
}
int Customer::getId()
{
    return id;
}
void Customer::setCustomer()
{
    cin.ignore();
    cout << "Enter name of customer: ";
    getline(cin, this->name);
    cout << "Enter age of customer: ";
    cin >> this->age;
    cout << "Enter id of customer: ";
    cin >> this->id;
}
void Customer::getCustomer()
{
    cout << "Name: " << getName() << endl << "Age: " << getAge() << endl << "ID: " << getId() << endl;
}

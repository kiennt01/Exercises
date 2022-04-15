#include "Customer.h"

string Customer::getName()
{
    return name;
}
int Customer::getAddress()
{
    return address;
}
int Customer::getCode()
{
    return code;
}
void Customer::setInfo()
{
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, this->name);
    cout << "Enter address number: ";
    cin >> this->address;
    cout << "Enter code: ";
    cin >> code;
}
void Customer::getInfo()
{
    cout << "Name: " << getName() << endl << "Address: " << getAddress() << endl << "Code: " << getCode() << endl;
}

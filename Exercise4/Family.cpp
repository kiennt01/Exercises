#include "Family.h"

int Family::getMember()
{
    return member;
}
int Family::getAddress()
{
    return address;
}
void Family::setCitizen()
{
    cout << "Enter address number: ";
    cin >> this->address;
    cout << "Enter number of member in family: ";
    cin >> this->member;
    cout << "----" << endl;

    for (int i = 0; i < getMember(); i++)
    {
    info.push_back(Citizen());
    info[i].setCitizen();
    cout << "----" << endl;
    }
}
void Family::getCitizen()
{
    cout << "Address: " << getAddress() << endl << "Number of member in family: " << getMember() << endl;
    cout << "-" << endl;
    for (int i = 0; i < getMember(); i++)
    {
        info[i].getCitizen();
        cout << endl;
    }
}


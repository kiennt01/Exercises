#include "Experience.h"


Experience::Experience()
{
    this->type = "Experience";
}
int Experience::getExpYear()
{
    return expInyear;
}
string Experience::getEmployeeType()
{
    return type;
}
string Experience::getProSkill()
{
    return proSkill;
}
int Experience::getCer()
{
    return cer;
}
void Experience::setInfo()
{
    Employee::setInfo();
    cout << "Enter years experience: ";
    cin >> expInyear;
    cin.ignore();
    cout << "Enter professional skill: ";
    getline(cin, this->proSkill);
    cout << "----" << endl;
    cout << "Enter the number of certificate you have: ";
    cin >> this->cer;
    for (int i = 0; i < getCer(); i++)
    {
        certi.push_back(Certificate());
        certi[i].setCer();
        cout << "-" << endl;
    }
}
void Experience::getInfo()
{
    Employee::getInfo();
    cout << "Employee type: " << getEmployeeType() << endl;
    cout << "Year experience: " << getExpYear() << endl;
    cout << "Professional skill: " << getProSkill() << endl;
    for (int i = 0; i < getCer(); i++)
    {
        certi[i].getCer();
        cout << endl;
    }
}

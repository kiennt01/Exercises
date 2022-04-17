#include "Fresher.h"

Fresher::Fresher()
{
    this->type = "Fresher";
}
int Fresher::getGradDate()
{
    return gradDate;
}
int Fresher::getRank()
{
    return rank;
}
string Fresher::getEdu()
{
    return edu;
}
string Fresher::getEmployeeType()
{
    return type;
}
int Fresher::getCer()
{
    return cer;
}
void Fresher::setInfo()
{
    Employee::setInfo();
    cout << "Enter graduation date: ";
    cin >> this->gradDate;
    cout << "Enter graduation rank: ";
    cin >> this->rank;
    cout << "Enter education: ";
    cin.ignore();
    getline(cin, this->edu);
    cout << "Enter the number of certificate you have: ";
    cin >> this->cer;
    for (int i = 0; i < getCer(); i++)
    {
        certi.push_back(Certificate());
        certi[i].setCer();
        cout << "-" << endl;
    }
}
void Fresher::getInfo()
{
    Employee::getInfo();
    cout << "Employee type: " << getEmployeeType() << endl;
    cout << "Graduation date: " << getGradDate() << endl;
    cout << "Graduation rank: " << getRank() << endl;
    cout << "Education: " << getEdu() << endl;
    for (int i = 0; i < getCer(); i++)
    {
        certi[i].getCer();
        cout << endl;
    }
}

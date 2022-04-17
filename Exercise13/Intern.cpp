#include "Intern.h"

Intern::Intern()
{
    this->type = "Intern";
}
string Intern::getMajor()
{
    return major;
}
string Intern::getUniversity()
{
    return university;
}
string Intern::getEmployeeType()
{
    return type;
}
int Intern::getSemester()
{
    return semester;
}
int Intern::getCer()
{
    return cer;
}
void Intern::setInfo()
{
    Employee::setInfo();
    cout << "Enter major: ";
    getline(cin, this->major);
    cout << "Enter university: ";
    cin.ignore();
    getline(cin, this->university);
    cout << "Enter semester: ";
    cin >> semester;
    cout << "Enter the number of certificate you have: ";
    cin >> this->cer;
    for (int i = 0; i < getCer(); i++)
    {
        certi.push_back(Certificate());
        certi[i].setCer();
        cout << "-" << endl;
    }
}
void Intern::getInfo()
{
    Employee::getInfo();
    cout << "Employee type: " << getEmployeeType() << endl;
    cout << "University: " << getUniversity() << endl;
    cout << "Major: " << getMajor() << endl;
    cout << "Semester: " << getSemester() << endl;
    for (int i = 0; i < getCer(); i++)
    {
        certi[i].getCer();
        cout << endl;
    }
}

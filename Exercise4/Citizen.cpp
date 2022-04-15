#include "Citizen.h"

string Citizen::getName()
{
    return name;
}
string Citizen::getJob()
{
    return job;
}
int Citizen::getAge()
{
    return age;
}
int Citizen::getId()
{
    return id;
}
void Citizen::setCitizen()
{
    cout << "Enter citizen name: ";
    cin.ignore();
    getline(cin, this->name);
    cout << "Enter citizen age: ";
    cin >> this->age;
    cout << "Enter citizen job: ";
    cin.ignore();
    getline(cin, this->job);
    cout << "Enter citizen id: ";
    cin >> this->id;
}
void Citizen::getCitizen()
{
    cout << "Name: " << getName() << endl << "Age: " << getAge() << endl << "Job: " << getJob() << endl << "Id: " << getId() << endl;
}

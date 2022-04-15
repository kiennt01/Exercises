#include "Candidate.h"

int Candidate::getId()
{
    return id;
}
int Candidate::getPriority()
{
    return priority;
}
string Candidate::getName()
{
    return name;
}
string Candidate::getAddress()
{
    return address;
}
void Candidate::setCandidate()
{
    cout << "Enter candidate id: ";
    while (cin >> this->id && (this->id < 1))
    {
        cout << "Invalid id. Type again: ";
    }
    cin.ignore();
    cout << "Enter candidate name: ";
    getline(cin, this->name);
    cout << "Enter candidate address: ";
    getline(cin, this->address);
    cout << "Enter candidate priority: ";
    while (cin >> this->priority && (this->priority < 1))
    {
        cout << "Invalid priority. Type again: ";
    }
}
void Candidate::getCandidate()
{
    cout << "Candidate id: " << getId() << endl << "Candidate name: " << getName() << endl << "Candidate address: " << getAddress() << endl;
    cout << "Candidate priority: " << getPriority() << endl;
}

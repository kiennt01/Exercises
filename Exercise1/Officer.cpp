#include "Officer.h"

    string Officer::getName()
    {
        return name;
    }
    int Officer::getAge()
    {
        return age;
    }
    string Officer::getGender()
    {
        return gender;
    }
    string Officer::getAddress()
    {
        return address;
    }
    void Officer::setOfficer()
    {
        cout << "Enter officer name: "; cin.ignore();
        getline(cin, this->name);
        cout << "Enter officer age: ";
        cin >> this->age;
        cout << "Enter officer gender: "; cin.ignore();
        getline(cin, this->gender);
        cout << "Enter officer address: ";
        getline(cin, this->address);
    }
    void Officer::getOfficer()
    {
        cout << "Name: " << getName() << endl << "Age: " << getAge() << endl << "Gender: " << getGender() << endl << "Address:" << getAddress() << endl;
    }

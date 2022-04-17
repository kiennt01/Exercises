#include "Employee.h"
int Employee::count = 0;

Employee::Employee()
{
    count++;
}

int Employee::getId()
{
    return id;
}
int Employee::getBirthday()
{
    return birthday;
}
string Employee::getPhone()
{
    return phone;
}
int Employee::getType()
{
    return type;
}
string Employee::getName()
{
    return name;
}
string Employee::getEmail()
{
    return email;
}
string Employee::getEmployeeType()
{
    return type_temp;
}
void Employee::setInfo()
{
    cout << "Enter ID: ";
    cin >> this->id;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, this->name);
    cout << "Enter birthday: ";
    cin >> this->birthday;
    cout << "Enter phone: ";
    while(cin >> this->phone && (this->phone.length() != 10 || !isDigit(this->phone)))
    {
        cout << "Invalid phone. Type again: ";
    }
    cout << "Enter email: ";
    cin.ignore();
    while(getline(cin, this->email) && !isEmail(this->email))
    {
        cout << "Invalid email. Type again: ";
    }
}
void Employee::getInfo()
{
    cout << "ID: " << getId() << endl << "Name: " << getName() << endl;
    cout << "Birthday: " << getBirthday() << endl << "Phone number: " << getPhone() << endl;
    cout << "Enter email: " << getEmail() << endl;
}
bool Employee::isDigit(string num)
{
    int len = num.length();
    for (int i = 0; i < len; i++)
    {
        if (isdigit(num[i]) == 0)
        {
            cout << "The phone number cannot take any letter!" << endl;
            return false;
        }
    }
    return true;
}
bool Employee::isEmail(string check)
{
    for (int i = 0; i < check.length(); i++)
    {
        if (check[i] == '@') return true;
    }
    cout << "Email must contain @" << endl;
    return false;
}

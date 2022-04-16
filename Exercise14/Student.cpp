#include "Student.h"

string Student::getLevel()
{
    return level;
}
string Student::getName()
{
    return name;
}
string Student::getGender()
{
    return gender;
}
string Student::getUniversityName()
{
    return universityName;
}
int Student::getBirthDate()
{
    return birthDate;
}
int Student::getBirthMonth()
{
    return birthMonth;
}
int Student::getBirthYear()
{
    return birthYear;
}
string Student::getPhone()
{
    return phone;
}
int Student::getGradeLevel()
{
    return gradeLevel;
}
int Student::getGPA()
{
    return gpa;
}
int Student::getToeic()
{
    return toeic;
}
void Student::setInfo()
{
    cout << "Enter name (5 to 10 characters): ";
    cin.ignore();
    while (getline(cin, this->name) && (this->name.length() < 5 || this->name.length() > 10))
    {
        cout << "Invalid name. Type again: ";
    }
    cout << "Enter gender: ";
    getline(cin, this->gender);
    cout << "Enter university: ";
    getline(cin, this->universityName);
    cout << "Enter birthdate: ";
    while (cin >> this->birthDate && (this->birthDate < 1 || this->birthDate > 31))
    {
        cout << "Invalid birthdate. Type again: ";
    }
    cout << "Enter birthMonth: ";
    while (cin >> this->birthMonth && (this->birthMonth < 1 || this->birthMonth > 12))
    {
        cout << "Invalid birhtmonth. Type again: ";
    }
    cout << "Enter birthyear in range of 1970 to 2022: ";
    while (cin >> this->birthYear && (this->birthYear < 1970 || this->birthYear > 2022))
    {
        cout << "Invalid birthyear. Type again: ";
    }
    cout << "Enter phone number (10 digits): ";
    while (cin >> this->phone && ((this->phone.length() != 10) || !isDigit(this->phone) || !checkStart(this->phone)))
    {
        cout << "Invalid phone number. Type again: ";
    }
}
void Student::getInfo()
{
    cout << "Name: " << getName() << endl << "Gender: " << getGender() << endl;
    cout << "University: " << getUniversityName() << endl;
    cout << "Birthday: " << getBirthDate() << "/" << getBirthMonth() << "/" << getBirthYear() << endl;
    cout << "Phone number: " << getPhone() << endl;
}
bool Student::isDigit(string num)
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
bool Student::checkStart(string check)
{
    string temp = check.substr(0, 3);
    string a[6] = {"090", "098", "091", "031", "035", "038"};
    for (int i = 0; i < 6; i++)
    {
         if (temp == a[i])
         {
             return true;
         }
    }
    cout << "The phone number must start with '090', '098', '091', '031', '035', '038'." << endl;
    return false;
}

#include "Student.h"

Student::Student()
{
    this->search ="DN";
}
string Student::getSearch()
{
    return search;
}
string Student::getName()
{
    return name;
}
string Student::getHometown()
{
    return hometown;
}
int Student::getAge()
{
    return age;
}
void Student::setStudent()
{
    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, this->name);
    cout << "Enter student age: ";
    cin >> this->age;
    cin.ignore();
    cout << "Enter student hometown: ";
    getline(cin, this->hometown);
}
void Student::getStudent()
{
    cout << "Name: " << getName() << endl << "Age: " << getAge() << endl << "Hometown: " << getHometown() << endl;
}
void Student::addStudent(vector<Student> &list)
{
    list.push_back(Student());
    list[list.size() - 1].setStudent();
    cout << "----" << endl;
}
void Student::sortStudent(vector<Student> list)
{
    int found = 0;
    for (int i = 0; i < list.size(); i++)
    {
        if(list[i].getAge() == 20)
        {
            found = 1;
            list[i].getStudent();
            cout << "----" << endl;
        }
    }
    if (found == 0) cout << "There are no student at age 20" << endl;
}
int Student::countStudent(vector<Student> list)
{
    int count = 0;
    for (int i = 0; i < list.size(); i++)
    {
        if ((list[i].getAge() == 23) && (list[i].getHometown() == getSearch()))
            count++;
    }
    return count;
}

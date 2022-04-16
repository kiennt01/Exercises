#include "GoodStudent.h"

GoodStudent::GoodStudent()
{
    this -> level = "Good";
}
int GoodStudent::getGPA()
{
    return gpa;
}
string GoodStudent::getReward()
{
    return reward;
}
string GoodStudent::getLevel()
{
    return level;
}
void GoodStudent::setInfo()
{
    Student::setInfo();
    cout << "Enter GPA: ";
    while (cin >> this->gpa && (this->gpa < 1 || this->gpa > 10))
    {
        cout << "Invalid GPA. Type again: ";
    }
    cout << "Enter reward: ";
    cin.ignore();
    getline(cin, this->reward);
}
void GoodStudent::getInfo()
{
    Student::getInfo();
    cout << "Grade level: " << getLevel() << endl;
    cout << "GPA: " << getGPA() << endl;
    cout << "Reward: " << getReward() << endl;
}

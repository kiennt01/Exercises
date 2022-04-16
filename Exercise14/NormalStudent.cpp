#include "NormalStudent.h"

int NormalStudent::getToeic()
{
    return englishScore;
}
int NormalStudent::getEntry()
{
    return entryScore;
}
string NormalStudent::getLevel()
{
    return level;
}
void NormalStudent::setInfo()
{
    Student::setInfo();
    cout << "Enter Toeic score: ";
    while (cin >> this->englishScore && (this->englishScore < 0 || this->englishScore > 990))
    {
        cout << "Invalid score. Type again: ";
    }
    cout << "Enter your test score: ";
    while (cin >> this->englishScore && (this->englishScore < 0))
    {
        cout << "Invalid score. Type again: ";
    }
}
void NormalStudent::getInfo()
{
    Student::getInfo();
    cout << "Grade level: " << getLevel() << endl;
    cout << "Toeic score: " << getToeic() << endl;
    cout << "Entry test score: " << getEntry() << endl;
}

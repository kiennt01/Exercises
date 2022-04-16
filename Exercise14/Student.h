#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
private:
    string name, gender, universityName, phone, level;
    int birthDate, birthMonth, birthYear;
    int gradeLevel, gpa, toeic;
public:
    string getName();
    string getGender();
    string getUniversityName();
    int getBirthDate();
    int getBirthMonth();
    int getBirthYear();
    string getPhone();
    int getGradeLevel();
    virtual void setInfo();
    virtual void getInfo();
    bool isDigit(string);
    bool checkStart(string);
    virtual string getLevel();
    virtual int getGPA();
    virtual int getToeic();
};

#endif // STUDENT_H

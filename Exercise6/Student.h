#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>
using namespace std;

class Student
{
private:
    string name, hometown, search;
    int age;
public:
    Student();
    string getSearch();
    string getName();
    string getHometown();
    int getAge();
    void setStudent();
    void getStudent();
    void addStudent(vector<Student>&);
    void sortStudent(vector<Student>);
    int countStudent(vector<Student>);
};

#endif // STUDENT_H

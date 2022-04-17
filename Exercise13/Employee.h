#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>


using namespace std;

class Employee
{
private:
    int id, birthday, type;
    string name, email, type_temp, phone;

public:
    static int count;
    Employee();
    int getCount();
    int getId();
    int getBirthday();
    string getPhone();
    int getType();
    string getName();
    string getEmail();
    void setType();
    bool isDigit(string);
    bool isEmail(string);
    virtual string getEmployeeType();
    virtual void setInfo();
    virtual void getInfo();
};

#endif // EMPLOYEE_H

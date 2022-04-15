#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>

using namespace std;

class Customer
{
private:
    string name;
    int age, id, cost, day;
public:
    virtual int getCost() = 0;
    virtual int getDay() = 0;
    string getName();
    int getAge();
    int getId();
    virtual void setCustomer();
    virtual void getCustomer();
};

#endif // CUSTOMER_H

#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>

using namespace std;

class Customer
{
private:
    string name;
    int address, code;
public:
    string getName();
    int getAddress();
    int getCode();
    virtual void setCost() = 0;
    virtual void setOldindex(int) = 0;
    virtual void setNewindex(int) = 0;
    void setInfo();
    virtual void getInfo();
};

#endif // CUSTOMER_H

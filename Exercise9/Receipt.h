#ifndef RECEIPT_H
#define RECEIPT_H
#include <iostream>
#include <vector>
#include "Customer.h"

class Receipt:public Customer
{
private:
    int oldIndex, newIndex, cost;
public:
    int getOldindex();
    int getNewindex();
    void setCost();
    void setOldindex(int);
    void setNewindex(int);
    int getCost();
    void getInfo();
    void addCustomer(vector<Customer*>&);
    void printCustomer(vector<Customer*>&);
    void deleteCustomer(vector<Customer*>&);
};

#endif // RECEIPT_H

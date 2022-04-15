#include "Receipt.h"

int Receipt::getOldindex()
{
    return oldIndex;
}
int Receipt::getNewindex()
{
    return newIndex;
}
void Receipt::setCost()
{
    this->cost = (this->newIndex - this->oldIndex) * 5;
}
int Receipt::getCost()
{
    return cost;
}
void Receipt::setOldindex(int index)
{
    this->oldIndex = index;
}
void Receipt::setNewindex(int index)
{
    this->newIndex = index;
}

void Receipt::getInfo()
{
    Customer::getInfo();
    cout << "The old electricity index: " << getOldindex() << endl;
    cout << "The new electricity index: " << getNewindex() << endl;
    cout << "The electricity cost: " << getCost() << endl;
}
void Receipt::addCustomer(vector<Customer*> &list)
{
    int index1, index2;
    list.push_back(new Receipt);
    list[list.size() - 1]->setInfo();
    cout << "Enter the old index: " ;
    cin >> index1;
    list[list.size() - 1]->setOldindex(index1);
    cout << "Enter the new index: " ;
    while (cin >> index2 && (index2 <= index1))
    {
        cout << "The new index must bigger than old index!. Type new index again: ";
    }
    list[list.size() - 1]->setNewindex(index2);
    list[list.size() - 1]->setCost();
    cout << "----" << endl;
}
void Receipt::printCustomer(vector<Customer*> &list)
{
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->getInfo();
        cout << endl;
        cout << "----" << endl;
    }
}
void Receipt::deleteCustomer(vector<Customer*> &list)
{
    int searchCode;
    int found = 0;
    cout << "Enter the customer code you want to delete: ";
    cin >> searchCode;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getCode() == searchCode)
        {
            found = 1;
            list.erase(list.begin() + i);
            cout << "The customer with code " << searchCode << " have been deleted." << endl;
            break;
        }
    }
    if (found == 0)
    {
        cout << "The custome code does not exist!";
    }
}

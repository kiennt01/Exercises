#include "Town.h"

void Town::addCitizen(vector<Citizen *> &list)
{
    int n;
    cout << "Enter the number of family you want to add: ";
    while (cin >> n && n < 1)
    {
        cout << "Please enter 1 or more: ";
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Family " << i + 1 << " :" << endl;
        list.push_back(new Family);
        list[list.size() - 1]->setCitizen();
        cout << "----" << endl;
    }
}
void Town::printCitizen(vector<Citizen*> list)
{
    for (int i = 0; i < list.size(); i++)
    {
        list[i] ->getCitizen();
        cout << "----" << endl;
    }
}

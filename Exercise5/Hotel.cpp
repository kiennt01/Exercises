#include "Hotel.h"

void Hotel::addCustomer(vector<Customer*>& list)
{
    int choice;
    do
    {
        cout << "Choose type of room" << endl;
        cout << "1. Room A" << endl;
        cout << "2. Room B" << endl;
        cout << "3. Room C" << endl;
        cout << "4. Return to main menu" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch (choice)
        {
        case 1:
            list.push_back(new RoomA);
            list[list.size() - 1]->setCustomer();
            cout << "----" << endl;
            break;
        case 2:
            list.push_back(new RoomB);
            list[list.size() - 1]->setCustomer();
            cout << "----" << endl;
            break;
        case 3:
            list.push_back(new RoomC);
            list[list.size() - 1]->setCustomer();
            cout << "----" << endl;
            break;
        default: break;
        }
    } while (choice != 4);
}
void Hotel::deleteCustomer(vector<Customer*>& list)
{
    int id;
    int found = 0;
    cout << "Enter id of customer need to delete from the list: ";
    cin >> id;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getId() == id)
        {
            found = 1;
            list.erase(list.begin() + i);
            cout << "Customer with the id " << id << " have been removed" << endl;
            break;
        }
    }
    if (found == 0)
    {
        cout << "The id does not exist" << endl << "----" << endl;
    }
}
void Hotel::Cost(vector<Customer*> list)
{
    int id;
    int found = 0;
    cout << "Enter id of customer to calculate cost: ";
    cin >> id;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getId() == id)
        {
            found = 1;
            cout << "The cost is: " << (list[i]->getDay()) * (list[i]->getCost()) << endl;
        }
    }
    if (found == 0)
    {
        cout << "This id does not exist" << endl << "----" << endl;;
    }
}

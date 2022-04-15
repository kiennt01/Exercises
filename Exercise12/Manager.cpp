#include "Manager.h"

void Manager::addVehicle(vector<Vehicle *> &list)
{
    int choice;
    do
    {
        cout << "Choose type of vehicle" << endl;
        cout << "1. Car" << endl;
        cout << "2. Motorbike" << endl;
        cout << "3. Truck" << endl;
        cout << "4. Go back to main menu" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch (choice)
        {
        case 1:
            list.push_back(new Car);
            list[list.size() - 1]->setInfo();
            cout << "----" << endl;
            break;
        case 2:
            list.push_back(new Motorbike);
            list[list.size() - 1]->setInfo();
            cout << "----" << endl;
            break;
        case 3:
            list.push_back(new Truck);
            list[list.size() - 1]->setInfo();
            cout << "----" << endl;
            break;
        default: break;
        }
    } while (choice != 4);
}
void Manager::printVehicle(vector<Vehicle *> &list)
{
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->getInfo();
    }
}
void Manager::deleteVehicle(vector<Vehicle *> &list)
{
    int deleteId;
    int found = 0;
    cout << "Type the ID of vehicle you want to delete: ";
    cin >> deleteId;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getId() == deleteId)
        {
            found = 1;
            list.erase(list.begin() + i);
            break;
        }
    }
    if (found == 0)
    {
        cout << "The ID not found!" << endl;;
        cout << "----" << endl;
    }
}
void Manager::searchBrand(vector<Vehicle*> list)
{
    int found = 0;
    string search;
    cout << "Enter brand you want to search: ";
    cin.ignore();
    getline(cin, search);
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getBrand() == search)
        {
            found = 1;
            list[i]->getInfo();
            cout << "----" << endl;
        }
    }
    if (found == 0)
    {
        cout << "There is no brand fit yours!" << endl << "----" << endl;
    }
}
void Manager::searchColor(vector<Vehicle*> list)
{
    int found = 0;
    string search;
    cout << "Enter color you want to search: ";
    cin.ignore();
    getline(cin, search);
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getColor() == search)
        {
            found = 1;
            list[i]->getInfo();
            cout << "----" << endl;
        }
    }
    if (found == 0)
    {
        cout << "There is no color fit yours!" << endl << "----" << endl;
    }
}

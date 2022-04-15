#include "Manager.h"

    void Manager::addOfficer(vector<Officer*>& list)
    {
        int choice;
        do
        {
            cout << "Choose job to input data of officer" << endl;
            cout << "1. Worker" << endl;
            cout << "2. Staff" << endl;
            cout << "3. Engineer" << endl;
            cout << "4. Go back to main menu" << endl;
            cout << "Your choice: ";
            while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
            {
                cout << "Invalid choice. Type again: ";
            }
            switch (choice)
            {
            case 1:
                list.push_back(new Worker);
                list[list.size() - 1]->setOfficer();
                cout << "----" << endl;
                break;
            case 2:
                list.push_back(new Staff);
                list[list.size() - 1]->setOfficer();
                cout << "----" << endl;
                break;
            case 3:
                list.push_back(new Engineer);
                list[list.size() - 1]->setOfficer();
                cout << "----" << endl;
                break;
            default: break;
            }
        } while (choice != 4);
    }
    void Manager::printOfficer(vector<Officer*>& list)
    {
        for (int i = 0; i < list.size(); i++)
        {
            list[i]->getOfficer();
            cout << endl;
        }
        cout << "----" << endl;
    }
    void Manager::searchOfficer(vector<Officer*> list)
    {
        string searchName;
        int found = 0;
        cout << "Enter name of officer you want to search: ";
        cin.ignore();
        getline(cin, searchName);
        for (int i = 0; i < list.size(); i++)
        {
            if (searchName == list[i]->getName())
            {
                found = 1;
                list[i]->getOfficer();
                cout << endl;
                cout << "----" << endl;
            }
        }
        if (found == 0)
        {
            cout << "Cannot found officer!" << endl;
            cout << "----" << endl;
        }
    }

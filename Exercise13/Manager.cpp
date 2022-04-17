#include "Manager.h"

void Manager::addEmployee(vector<Employee*> &list)
{
    int choice;
    do
    {
        cout << "Choose type of candidate to add: " << endl;
        cout << "1. Experience" << endl;
        cout << "2. Fresher" << endl;
        cout << "3. Intern" << endl;
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
            list.push_back(new Experience);
            list[list.size() - 1]->setInfo();
            cout << "----" << endl;
            break;
        case 2:
            list.push_back(new Fresher);
            list[list.size() - 1]->setInfo();
            cout << "----" << endl;
            break;
        case 3:
            list.push_back(new Intern);
            list[list.size() - 1]->setInfo();
            cout << "----" << endl;
            break;
        default: break;
        }
    } while (choice != 4);
}
void Manager::printCandidate(vector<Employee*> list)
{
    if (list.size() == 0 ) cout << "EMPTY" << endl << "----" << endl;
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->getInfo();
    }
}
void Manager::editCandidate(vector<Employee*> &list)
{
    int editID;
    int choice;
    cout << "Enter the ID of candidate you want to edit: ";
    cin >> editID;
    cout << "----" << endl;
    cout << "You want to delete or edit this candidate info? " << endl;
    cout << "1. Delete" << endl;
    cout << "2. Edit" << endl;
    cout << "Your choice: ";
    cin >> choice;
    switch(choice)
    {
    case 1:
        for (int i = 0; i < list.size(); i++)
        {
            if (list[i]->getId() == editID)
            {
                list.erase(list.begin() + i);
                cout << "----" << endl;
                cout << "Candidate with ID " << editID << " have been deleted" << endl;
            }
        }
    case 2:
        for (int i = 0; i < list.size(); i++)
        {
            if (list[i]-> getId() == editID)
            {
                list[i]->setInfo();
                cout << "Edit succeeded!" << endl;
            }
        }
    }
}
void Manager::sortCandidate(vector<Employee*> list)
{
    string exp = "Experience";
    string fresh = "Fresher";
    string intern = "Intern";
    int choice;
    do {
        cout << "Choose type of candidate you want to search: " << endl;
        cout << "1. Experience" << endl;
        cout << "2. Fresher" << endl;
        cout << "3. Intern" << endl;
        cout << "4. Return to main menu" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        cout << "----" << endl;
        switch (choice)
        {
        case 1:
            cout << "All EXPERIENCE candidate are : " << endl;
            for (int i = 0; i < list.size(); i++)
            {
                if (exp.compare(list[i]->getEmployeeType()) == 0) list[i]->getInfo();
            }
            cout << "----" << endl;
            break;
        case 2:
            cout << "All FRESHER candidate are : " << endl;
            for (int i = 0; i < list.size(); i++)
            {
                if (fresh.compare(list[i]->getEmployeeType()) == 0) list[i]->getInfo();
            }
            cout << "----" << endl;
            break;
        case 3:
            cout << "All INTERN candidate are : " << endl;
            for (int i = 0; i < list.size(); i++)
            {
                if (intern.compare(list[i]->getEmployeeType()) == 0) list[i]->getInfo();
            }
            cout << "----" << endl;
            break;
        default:break;
        }
    } while (choice != 4);
}

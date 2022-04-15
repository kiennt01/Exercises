#include <iostream>
#include "Manager.h"

int main()
{
    Manager manage;
    vector<Officer*> list;
    list.resize(0);
    int choice;
    do
    {
        cout << "Please choose the following option" << endl;
        cout << "1. Add an officer" << endl;
        cout << "2. Print out all officer" << endl;
        cout << "3. Search an officer" << endl;
        cout << "4. Quit program" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        switch (choice)
        {
        case 1:
            system("cls");
            manage.addOfficer(list);
            break;
        case 2:
            system("cls");
            manage.printOfficer(list);
            break;
        case 3:
            system("cls");
            manage.searchOfficer(list);
            break;
        default: break;
        }
    } while (choice != 4);
    return 0;
}

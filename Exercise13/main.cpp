#include "Manager.h"

int main()
{
    Manager manage;
    vector<Employee*> list;
    list.resize(0);
    int choice;
    do {
        cout << "Please choose the following option" << endl;
        cout << "1. Add a candidate" << endl;
        cout << "2. Print out list of candidate" << endl;
        cout << "3. Edit or delete a candidate" << endl;
        cout << "4. Sort candidate" << endl;
        cout << "4. Quit program" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
        {
            cout << "Invalid choice. Type again: ";
        }
        switch (choice)
        {
        case 1:
            system("cls");
            manage.addEmployee(list);
            break;
        case 2:
            system("cls");
            manage.printCandidate(list);
            break;
        case 3:
            system("cls");
            manage.editCandidate(list);
            break;
        case 4:
            system("cls");
            manage.sortCandidate(list);
            break;
        default: break;
        }
    } while (choice != 5);
    return 0;
}

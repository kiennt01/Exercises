#include "Town.h"

int main()
{
    Town town;
    vector<Citizen*> list;
    list.resize(0);
    int choice;
    do
    {
        cout << "Choose your option" << endl;
        cout << "1. Add new family" << endl;
        cout << "2. Print list of family" << endl;
        cout << "3. Quit" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch (choice)
        {
        case 1:
            system("cls");
            town.addCitizen(list);
            break;
        case 2:
            system("cls");
            town.printCitizen(list);
            break;
            break;
        default: break;
        }
    } while (choice != 3);
    return 0;
}

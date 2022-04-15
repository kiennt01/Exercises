#include "Manager.h"

int main()
{
    Manager manage;
    vector<Paper*> list;
    list.resize(0);
    int choice;
    do {
        cout << "Please choose the following option" << endl;
        cout << "1. Add a paper" << endl;
        cout << "2. Print out list of paper" << endl;
        cout << "3. Search a type of book" << endl;
        cout << "4. Delete a paper" << endl;
        cout << "5. Quit program" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
        {
            cout << "Invalid choice. Type again: ";
        }
        switch (choice)
        {
        case 1:
            system("cls");
            manage.addPaper(list);
            break;
        case 2:
            system("cls");
            manage.printPaper(list);
            break;
        case 3:
            system("cls");
            manage.searchPaper(list);
            break;
        case 4:
            system("cls");
            manage.deletePaper(list);
            break;
        default: break;
        }
    } while (choice != 5);
    return 0;
}

#include "Manager.h"

int main()
{
    Manager manage;
    vector<Vehicle*> list;
    list.resize(0);
    int choice;
    do {
        cout << "Please choose the following option" << endl;
        cout << "1. Add a vehicle" << endl;
        cout << "2. Print out list of vehicle" << endl;
        cout << "3. Delete a vehicle" << endl;
        cout << "4. Search a brand" << endl;
        cout << "5. Search a color" << endl;
        cout << "6. Quit program" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6)
        {
            cout << "Invalid choice. Type again: ";
        }
        switch (choice)
        {
        case 1:
            system("cls");
            manage.addVehicle(list);
            break;
        case 2:
            system("cls");
            manage.printVehicle(list);
            break;
        case 3:
            system("cls");
            manage.deleteVehicle(list);
            break;
        case 4:
            system("cls");
            manage.searchBrand(list);
            break;
        case 5:
            system("cls");
            manage.searchColor(list);
        default: break;
        }
    } while (choice != 6);
    return 0;
}

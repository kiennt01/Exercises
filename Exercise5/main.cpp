#include "Hotel.h"

int main()
{
    Hotel hotel;
    vector<Customer*> list;
    list.resize(0);
    int choice;
    do
    {
        cout << "Choose your option" << endl;
        cout << "1. Add a new cusomer" << endl;
        cout << "2. Delete a customer" << endl;
        cout << "3. Determine cost of a customer" << endl;
        cout << "4. Quit" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch (choice)
        {
        case 1:
            system("cls");
            hotel.addCustomer(list);
            break;
        case 2:
            system("cls");
            hotel.deleteCustomer(list);
            break;
        case 3:
            system("cls");
            hotel.Cost(list);
            break;
        default: break;
        }
    } while (choice != 4);
    return 0;
}

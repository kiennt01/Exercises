#include "Receipt.h"

int main()
{
    Receipt receipt;
    vector<Customer*> list;
    list.resize(0);
    int choice;
    do {
       cout << "Please choose the following option" << endl;
       cout << "1. Add a customer" << endl;
       cout << "2. Print out list of customer" << endl;
       cout << "3. Delete a customer information" << endl;
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
            receipt.addCustomer(list);
            break;
       case 2:
            system("cls");
            receipt.printCustomer(list);
            break;
       case 3:
            system("cls");
            receipt.deleteCustomer(list);
            break;
       default: break;
       }
    } while (choice != 4);
    return 0;
}

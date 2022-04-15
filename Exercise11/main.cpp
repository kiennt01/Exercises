#include "Complex.h"

int main()
{
    Complex number, first, second, result;
    int choice;
    do
    {
    cout << "1. Enter a complex number and print it" << endl;
    cout << "2. Enter 2 complex number and print it's sum" << endl;
    cout << "3. Enter 2 complex numner and print it's product" << endl;
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
        number.addNumber();
        cout << "----" << endl;
        cout << "The complex numer is: ";
        number.printNumber();
        cout << "----" << endl;
        break;
    case 2:
        system("cls");
        cout << "Please input real part and image part of first number: " << endl;
        first.addNumber();
        cout << "----" << endl;
        cout << "Please input real part and image part of second number: " << endl;
        second.addNumber();
        result = result.plusNumber(first, second);
        cout << "----" << endl;
        cout << "Sum of 2 complex number is: ";
        result.printNumber();
        cout << "----" << endl;
        break;
    case 3:
        system("cls");
        cout << "Please input real part and image part of first number: " << endl;
        first.addNumber();
        cout << "----" << endl;
        cout << "Please input real part and image part of second number: " << endl;
        second.addNumber();
        cout << "----" << endl;
        result = result.productNumber(first, second);
        cout << "Product of 2 complex number is: ";
        result.printNumber();
        cout << "----" << endl;
        break;
    }
    } while (choice != 4);
    return 0;
}

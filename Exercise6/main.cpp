#include "Student.h"

int main()
{
    Student student;
    vector<Student> list;
    list.resize(0);
    int choice;
    do
    {
        cout << "Choose your option" << endl;
        cout << "1. Add new student" << endl;
        cout << "2. Search 20 years old student " << endl;
        cout << "3. Count number of 23 years old student live in Danang " << endl;
        cout << "4. Quit program" << endl;
        while(cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch(choice)
        {
        case 1:
            system("cls");
            student.addStudent(list);
            break;
        case 2:
            system("cls");
            cout << "Students at age 20: " << endl;
            student.sortStudent(list);
            break;
        case 3:
            system("cls");
            cout << "The number of 23 years old student live in Danang: " << student.countStudent(list) << endl;
            break;
        default: break;
        }
    } while(choice != 4);
    return 0;
}

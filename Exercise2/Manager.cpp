#include "Manager.h"


void Manager::addPaper(vector<Paper*> &list)
{
    int choice;
    do
    {
        cout << "Choose type of paper to add" << endl;
        cout << "1. Book" << endl;
        cout << "2. Magazine" << endl;
        cout << "3. Newpaper" << endl;
        cout << "4. Go back to main menu" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch (choice)
        {
        case 1:
            list.push_back(new Book);
            list[list.size() - 1]->setPaper();
            cout << "----" << endl;
            break;
        case 2:
            list.push_back(new Magazine);
            list[list.size() - 1]->setPaper();
            cout << "----" << endl;
            break;
        case 3:
            list.push_back(new Newpaper);
            list[list.size() - 1]->setPaper();
            cout << "----" << endl;
            break;
        default: break;
        }
    } while (choice != 4);
}
void Manager::printPaper(vector<Paper*> &list)
{
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->getPaper();
        cout << endl;
        cout << "----" << endl;
    }
}
int Manager::deletePaper(vector<Paper*> &list)
{
    int id;
    int found = 0;
    cout << "Enter code of book need to delete from the list: ";
    cin >> id;
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getCode() == id)
        {
            found = 1;
            list.erase(list.begin() + i);
            cout << "Paper with code " << id << " have been deleted" << endl;
            break;
        }
    }
    if (found == 0)
    {
        cout << "The paper code does not exist" << endl;
        return 0;
    }
    else
    {
        return 1;
    }
}
void Manager::searchPaper(vector<Paper*> list)
{
    string book = "Book";
    string magazine = "Magazine";
    string newpaper = "Newpaper";
    int choice;
    do {
        cout << "Choose type of paper you want to search: " << endl;
        cout << "1. Book" << endl;
        cout << "2. Magazine" << endl;
        cout << "3. Newpaper" << endl;
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
            cout << "All paper are BOOK type : " << endl;
            for (int i = 0; i < list.size(); i++)
            {
                if (book.compare(list[i]->getType()) == 0) list[i]->getPaper();
            }
            cout << "----" << endl;
            break;
        case 2:
            cout << "All paper are MAGAZINE type : " << endl;
            for (int i = 0; i < list.size(); i++)
            {
                if (magazine.compare(list[i]->getType()) == 0) list[i]->getPaper();
            }
            cout << "----" << endl;
            break;
        case 3:
            cout << "All paper are NEWPAPER type : " << endl;
            for (int i = 0; i < list.size(); i++)
            {
                if (newpaper.compare(list[i]->getType()) == 0) list[i]->getPaper();
            }
            cout << "----" << endl;
            break;
        default:break;
        }
    } while (choice != 4);
}

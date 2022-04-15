#include "Admission.h"

void Admission::addCandidate(vector<Candidate*>& list)
{
    int choice;
    do
    {
        cout << "Choose combination of subject" << endl;
        cout << "1. Combination A" << endl;
        cout << "2. Combination B" << endl;
        cout << "3. Combination C" << endl;
        cout << "4. Return to main menu" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch (choice)
        {
        case 1:
            list.push_back(new combinationA);
            list[list.size() - 1]->setCandidate();
            cout << "----" << endl;
            break;
        case 2:
            list.push_back(new combinationB);
            list[list.size() - 1]->setCandidate();
            cout << "----" << endl;
            break;
        case 3:
            list.push_back(new combinationC);
            list[list.size() - 1]->setCandidate();
            cout << "----" << endl;
            break;
        default: break;
        }
    } while (choice != 4);
}
void Admission::printCandidate(vector<Candidate*> list)
{
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->getCandidate();
        cout << endl;
        cout << "----" << endl;
    }
}
void Admission::searchCandidate(vector<Candidate*> list)
{
    int id;
    int found = 0;
    cout << "Enter candidate id you want to search: ";
    cin >> id;
    for (int i = 0; i < list.size(); i++)
    {
        found = 1;
        if (list[i]->getId() == id) list[i]->getCandidate();
    }
    if (found == 0)
    {
        cout << "Candidate not found." << endl << "----" << endl;
    }
}

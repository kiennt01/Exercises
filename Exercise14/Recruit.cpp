#include "Recruit.h"

void Recruit::addCandidate(vector<Student*>& list)
{
    int choice;
    do
    {
        cout << "Enter the level of candidate" << endl;
        cout << "1. Good" << endl;
        cout << "2. Normal" << endl;
        cout << "3. Return to main menu" << endl;
        cout << "Your choice: ";
        while (cin >> choice && choice != 1 && choice != 2 && choice != 3)
        {
            cout << "Invalid choice. Type again: ";
        }
        system("cls");
        switch (choice)
        {
        case 1:
            list.push_back(new GoodStudent);
            list[list.size() - 1]->setInfo();
            cout << "----" << endl;
            break;
        case 2:
            list.push_back(new NormalStudent);
            list[list.size() - 1]->setInfo();
            cout << "----" << endl;
            break;
        default: break;
        }
    } while (choice != 3);
}
void Recruit::sortInfo(vector<Student *> &list)
{
    //sort name
    sort(list.begin(), list.end(), [](Student *a, Student *b)
    {
        return a->getName() <= b->getName();
    });
    //sort phone
    sort(list.begin(), list.end(), [](Student *a, Student *b)
    {
        return a->getPhone() <= b->getPhone();
    });
}
void Recruit::printCandidate(vector<Student*> list)
{
    sortInfo(list);
    for (int i = 0; i < list.size(); i++)
    {
        list[i]->getInfo();
        cout << "----" << endl;
    }
}

void Recruit::recruitment(vector<Student*> &list)
{
    string recruit = "Good";
    string sub_recruit = "Normal";
    int count = 0;
    int num;
    sortInfo(list);
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i]->getLevel() == recruit)
        {
            good.push_back(list[i]);
            count++;
        }
    }
    //sort GPA
    sort(good.begin(), good.end(), [](Student *a, Student *b){
        return a->getGPA() >= b->getGPA();
    });
    for (int i = 0; i < list.size(); i++)
    {
        if(list[i]->getLevel() == sub_recruit)
        {
            normal.push_back(list[i]);
        }
    }
    //sort Toeic
    sort(normal.begin(), normal.end(), [](Student *a, Student *b){
        return a->getToeic() >= b->getToeic();
    });
    cout << "Enter the number of candidate you need to hire: ";
    while (cin >> num && (num < 1 || num > 5))
    {
        cout << "Please enter the number of candidate from 1 to 5: ";
    }
    cout << "The following candidates have been hired: " << endl;
    if (count <= num)
    {
        for (int i = 0; i < good.size(); i++)
        {
            good[i]->getInfo();
            cout << "----" << endl;
        }
        for (int i = 0; i < num - count; i++)
        {
            normal[i]->getInfo();
            cout << "----" << endl;
        }
    }
    else if (count > num)
    {
        for (int i = 0; i < num; i++)
        {
            good[i]->getInfo();
            cout << "----" << endl;
        }
    }
}

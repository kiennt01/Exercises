#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

class Card:public Student
{
private:
    int id, date, deadline;
public:
    int getId();
    int getDate();
    int getDeadline();
    void setInfo();
    void getInfo();
    void addCard(vector<Student*>&);
    void printCard(vector<Student*>&);
    void deleteCard(vector<Student*>&);
};

#endif // CARD_H

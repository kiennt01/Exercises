#ifndef RECRUIT_H
#define RECRUIT_H
#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"
#include "GoodStudent.h"
#include "NormalStudent.h"
using namespace std;
class Recruit
{
private:
    vector<Student*> good;
    vector<Student*> normal;
public:
    void addCandidate(vector<Student*>&);
    void printCandidate(vector<Student*>);
    void recruitment(vector<Student*>&);
    void sortInfo(vector<Student*>&);
};

#endif // RECRUIT_H

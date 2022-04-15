#ifndef COMBINATIONA_H
#define COMBINATIONA_H
#include <iostream>
#include "Candidate.h"
using namespace std;

class combinationA:public Candidate
{
private:
    string combination;
public:
    combinationA();
    string getCombination();
    void getCandidate();
};

#endif // COMBINATIONA_H

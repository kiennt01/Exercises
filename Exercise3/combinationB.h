#ifndef COMBINATIONB_H
#define COMBINATIONB_H
#include <iostream>
#include "Candidate.h"
using namespace std;


class combinationB:public Candidate
{
private:
    string combination;
public:
    combinationB();
    string getCombination();
    void getCandidate();
};

#endif // COMBINATIONB_H

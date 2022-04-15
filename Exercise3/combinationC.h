#ifndef COMBINATIONC_H
#define COMBINATIONC_H
#include <iostream>
#include "Candidate.h"
using namespace std;

class combinationC:public Candidate
{
private:
    string combination;
public:
    combinationC();
    string getCombination();
    void getCandidate();
};

#endif // COMBINATIONC_H

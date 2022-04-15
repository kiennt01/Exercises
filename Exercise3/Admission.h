#ifndef ADMISSION_H
#define ADMISSION_H
#include <iostream>
#include <vector>
#include "Candidate.h"
#include "combinationA.h"
#include "combinationB.h"
#include "combinationC.h"
using namespace std;

class Admission
{
public:
    void addCandidate(vector<Candidate*>&);
    void printCandidate(vector<Candidate*>);
    void searchCandidate(vector<Candidate*>);
};

#endif // ADMISSION_H

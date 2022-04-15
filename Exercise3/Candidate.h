#ifndef CANDIDATE_H
#define CANDIDATE_H
#include <iostream>
using namespace std;

class Candidate
{
private:
    int id, priority;
    string name, address, combination;
public:
    virtual string getCombination() = 0;
    int getId();
    int getPriority();
    string getName();
    string getAddress();
    void setCandidate();
    virtual void getCandidate();
};

#endif // CANDIDATE_H

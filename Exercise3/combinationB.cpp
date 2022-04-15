#include "combinationB.h"

combinationB::combinationB()
{
    this->combination = "Math Chemistry Biology";
}
string combinationB::getCombination()
{
    return combination;
}
void combinationB::getCandidate()
{
    Candidate::getCandidate();
    cout << "Combination: " << getCombination() << endl;
}

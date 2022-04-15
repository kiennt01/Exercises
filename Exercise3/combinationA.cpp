#include "combinationA.h"

combinationA::combinationA()
{
    this->combination = "Math Physics Chemistry";
}
string combinationA::getCombination()
{
    return combination;
}
void combinationA::getCandidate()
{
    Candidate::getCandidate();
    cout << "Combination: " << getCombination() << endl;
}

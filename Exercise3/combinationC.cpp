#include "combinationC.h"

combinationC::combinationC()
{
    this->combination = "Literature History Geometry";
}
string combinationC::getCombination()
{
    return combination;
}
void combinationC::getCandidate()
{
    Candidate::getCandidate();
    cout << "Combination: " << getCombination() << endl;
}

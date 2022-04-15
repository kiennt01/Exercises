#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include "Officer.h"
using namespace std;

class Worker : public Officer
{
private:
    int rank;
public:
    int getRank();
    void setOfficer();
    void getOfficer();
};
#endif // WORKER_H

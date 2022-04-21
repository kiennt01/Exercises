#ifndef PAPER_H
#define PAPER_H
#include <iostream>
using namespace std;

class Paper
{
private:
    int code, releaseNumber;
    string publisher, type;
public:
    Paper();
    virtual string getType();
    int getCode();
    int getRelease();
    string getPublisher();
    virtual void setPaper();
    virtual void getPaper();
};


#endif // PAPER_H

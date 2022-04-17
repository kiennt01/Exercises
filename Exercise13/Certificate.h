#ifndef CERTIFICATE_H
#define CERTIFICATE_H
#include <iostream>
using namespace std;

class Certificate
{
private:
    int cerId, cerRank, cerDate;
    string cerName;
public:
    int getCerId();
    int getCerRank();
    int getCerDate();
    string getCerName();
    void setCer();
    void getCer();
};

#endif // CERTIFICATE_H

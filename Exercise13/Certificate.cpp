#include "Certificate.h"

int Certificate::getCerId()
{
    return cerId;
}
int Certificate::getCerRank()
{
    return cerRank;
}
int Certificate::getCerDate()
{
    return cerDate;
}
string Certificate::getCerName()
{
    return cerName;
}
void Certificate::setCer()
{
    cout << "Enter certificate id: ";
    cin >> this->cerId;
    cout << "Enter certificate rank: ";
    cin >> this->cerRank;
    cout << "Enter certificate name: ";
    cin.ignore();
    getline(cin, this->cerName);
    cout << "Enter certificate date: ";
    cin >> this->cerDate;
}
void Certificate::getCer()
{
    cout << "Certificate id: " << getCerId() << endl;
    cout << "Certificate rank: " << getCerRank() << endl;
    cout << "Certificate name: " << getCerName() << endl;
    cout << "Certificate date: " << getCerDate() << endl;
}

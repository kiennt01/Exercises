#include "Paper.h"

Paper::Paper()
{
    this->type = "Paper";
}
string Paper::getType()
{
    return type;
}
int Paper::getCode()
{
    return code;
}
int Paper::getRelease()
{
    return releaseNumber;
}
string Paper::getPublisher()
{
    return publisher;
}
void Paper::setPaper()
{
    cout << "Enter code of paper: ";
    while (cin >> this->code && (this->code < 0))
    {
        cout << "Invalid code. Type again: ";
    }
    cout << "Enter number of release: ";
    while (cin >> this->releaseNumber && (this->releaseNumber < 0))
    {
            cout << "Invalid number of release. Type again: ";
    }
    cin.ignore();
    cout << "Enter publisher of paper: ";
    getline(cin, publisher);
    }
void Paper::getPaper()
{
    cout << "Code: " << getCode() << endl << "Number of release: " << getRelease() << endl << "Publisher: " << getPublisher() << endl;
}

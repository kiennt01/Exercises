#include "Newpaper.h"

Newpaper::Newpaper()
{
    this->type = "Newpaper";
}
string Newpaper::getType()
{
    return type;
}
int Newpaper::getReleaseDate()
{
    return releaseDate;
}
void Newpaper::setPaper()
{
    Paper::setPaper();
    cout << "Enter number of release date: ";
    while (cin >> this->releaseDate && (this->releaseDate < 1 || this->releaseDate > 31))
    {
            cout << "Invalid date. Type again: ";
    }
}
void Newpaper::getPaper()
{
    cout << "Paper type: " << getType() << endl;
    Paper::getPaper();
    cout << "Release date: " << getReleaseDate() << endl;
}

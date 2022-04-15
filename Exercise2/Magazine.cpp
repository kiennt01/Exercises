#include "Magazine.h"

Magazine::Magazine()
{
    this->type = "Magazine";
}
string Magazine::getType()
{
    return type;
}
int Magazine::getReleaseNo()
{
    return releaseNo;
}
int Magazine::getReleaseMonth()
{
    return releaseMonth;
}
void Magazine::setPaper()
{
    Paper::setPaper();
    cout << "Enter release number: ";
    while (cin >> this->releaseNo && (this->releaseNo < 0))
    {
        cout << "Invalid release number. Type again: ";
    }
    cout << "Enter month release: ";
    while (cin >> this->releaseMonth && (this->releaseMonth < 1 || this->releaseMonth > 12))
    {
        cout << "Invalid month. Type again: ";
    }
}
void Magazine::getPaper()
{
    cout << "Paper type: " << getType() << endl;
    Paper::getPaper();
    cout << "Release number: " << getReleaseNo() << endl << "Month release: " << getReleaseMonth() << endl;
}

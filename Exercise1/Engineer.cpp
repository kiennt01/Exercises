#include "Engineer.h"

    string Engineer::getMajor()
    {
        return major;
    }
    void Engineer::setOfficer()
    {
        Officer::setOfficer();
        cout << "Enter officer major: ";
        getline(cin, this->major);
    }
    void Engineer::getOfficer()
    {
        Officer::getOfficer();
        cout << "Major: " << getMajor() << endl;
    }

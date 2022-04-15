#include "Worker.h"

    int Worker::getRank()
    {
    return rank;
    }
    void Worker::setOfficer()
    {
        Officer::setOfficer();
        cout << "Enter officer rank: ";
        while (cin >> this->rank && (this->rank < 1 || this->rank > 10))
        {
            cout << "Invalid rank. Type again: ";
        }
    }
    void Worker::getOfficer()
    {
        Officer::getOfficer();
        cout << "Rank: " << getRank() << endl;
    }

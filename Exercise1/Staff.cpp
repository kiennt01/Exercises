#include "Staff.h"

    string Staff::getTask()
    {
    return task;
    }
    void Staff::setOfficer()
    {
        Officer::setOfficer();
        cout << "Enter officer task: ";
        getline(cin, this->task);
    }
    void Staff::getOfficer()
    {
        Officer::getOfficer();
        cout << "Task: " << getTask() << endl;
    }

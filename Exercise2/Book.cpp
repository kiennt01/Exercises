#include "Book.h"

Book::Book()
{
    this->type = "Book";
}
string Book::getType()
{
    return type;
}
string Book::getAuthor()
{
    return author;
}
int Book::getPage()
{
    return page;
}
void Book::setPaper()
{
    Paper::setPaper();
    cout << "Enter number of page: ";
    while (cin >> this->page && (this->page < 0))
    {
        cout << "Invalid number of page. Type again: ";
    }
    cin.ignore();
    cout << "Enter author name: ";
    getline(cin, author);
}
void Book::getPaper()
{
    cout << "Paper type: " << getType() << endl;
    Paper::getPaper();
    cout << "Number of page: " << getPage() << endl << "Author: " << getAuthor() << endl;
}

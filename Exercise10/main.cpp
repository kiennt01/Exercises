#include "Document.h"

int main()
{
    string input;
    cout << "Enter your text: ";
    getline(cin, input);
    Document doc(input);
    cout << "Number of word: " << doc.countWord() << endl;
    cout << "Number of letter a(A): " << doc.countA() << endl;
    cout << "Text after standardlize: " << doc.Standardlize() << endl;
    return 0;
}

#include "Document.h"

Document::Document()
{
    text = " ";
}
Document::Document(string st)
{
    this->text = st;
}
int Document::countWord()
{
    bool isText = 0;
    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ' || text[i] == '\n' || text[i] == '\t')
        isText = 0;
        else if (isText == 0)
        {
            isText = 1;
            ++count;
        }
     }
     return count;
}
int Document::countA()
{
    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'a' || text[i] == 'A') count++;
    }
    return count;
}
string Document::Standardlize()
{
    int begin = 0;
    int end = text.length();
    while (text[begin] == ' ') begin++ ;
    while (text[end - 1] == ' ') end--;
    for (int i = 0; i < end; i++)
    {
        if ((text[i] == ' ') && (text[i + 1] == ' '))
        {
            strcpy(&text[i], &text[i + 1]);
            i--;
        }
    }
    return text;
}

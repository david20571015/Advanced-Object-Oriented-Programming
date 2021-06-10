#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

void search(const vector<string> &arti)
{
    string s;
    cin >> s;
    cout << "Position of " << s << " :";
    for (int i = 0; i < arti.size(); i++)
        if (arti.at(i) == s)
            cout << " " << i;
    cout << endl;
}

void replace(vector<string> &arti)
{
    string from, to;
    cin >> from >> to;
    for (int i = 0; i < arti.size(); i++)
        if (arti.at(i) == from)
            arti.at(i) = to;
    cout << endl;
}

void insert(vector<string> &arti)
{
    int pos;
    cin >> pos;
    string in;
    cin >> in;
    arti.insert(arti.begin() + pos, in);
}

void delete_(vector<string> &arti)
{
    int pos;
    cin >> pos;
    arti.erase(arti.begin() + pos);
}

void show_menu()
{
    cout << "1.search" << endl
         << "2.replace" << endl
         << "3.insert" << endl
         << "4.delete" << endl
         << "5.exit" << endl
         << "Choose an operation: ";
}

void show_article(const vector<string> &arti)
{
    const int MaxLineLength = 80;
    vector<string>::const_iterator iter = arti.cbegin();

    int LineLength;
    while (iter != arti.cend())
    {
        LineLength = 0;
        while (iter != arti.cend() && LineLength + iter->length() + 1 <= MaxLineLength)
        {
            LineLength += (iter->length() + 1);
            cout << (*iter++) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    string tmp;
    vector<string> article;

    while (cin >> tmp)
        article.push_back(tmp);
    cin.clear();

    int oper;
    while (1)
    {
        system("cls");
        show_article(article);
        show_menu();
        cin >> oper;
        switch (oper)
        {
        case 1:
            search(article);
            break;
        case 2:
            replace(article);
            break;
        case 3:
            insert(article);
            break;
        case 4:
            delete_(article);
            break;
        case 5:
            exit(0);
        }
        system("pause");
    }
    return 0;
}
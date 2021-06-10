#include <iostream>
#include <fstream>
#include <string>

using namespace std;

inline void swap(char &c1, char &c2)
{
    char tmp;
    tmp = c1;
    c1 = c2;
    c2 = tmp;
}

string reverse(const string &s)
{
    string tmp = s;
    for (int i = 0; i < tmp.length() / 2; i++)
        swap(tmp[i], tmp[tmp.length() - i - 1]);
    return tmp;
}

string removePunct(const string &s, const string &punct)
{
    string tmp;
    string::size_type pos = 0, prev = 0;
    while ((pos = s.find_first_of(punct, pos)) != string::npos)
    {
        tmp += s.substr(prev, pos - prev);
        prev = ++pos;
    }
    tmp+=s.substr(prev);

    return tmp;
}

bool isPalin(const string &s)
{
    string str = removePunct(s, " ,’.");
    string rev = reverse(str);

    for (int i = 0; i < str.length(); i++)
        if ((str[i] - rev[i] != 0 )&& (str[i] - rev[i] != 32 )&& (str[i] - rev[i] != -32))
            return 0;
    return 1;
}

int main()
{
    string in, s;
    ifstream infile;

    cin >> in;
    infile.open(in);

    while (getline(infile, s))
        cout << (isPalin(s) ? "YES" : "NO") << endl;
    return 0;
}
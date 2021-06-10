#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string op(const string &s)
{
    string tmp = s;
    for (int i = 0; i < tmp.length(); i++)
        tmp[i] -= 32;
    return tmp;
}

void display(const string &c)
{
    cout << c << "  ";
}

class OP
{
public:
    string operator()(const string &s)
    {
        string tmp = s;
        for (int i = 0; i < tmp.length(); i++)
            tmp[i] -= 32;
        return tmp;
    };
};

int main()
{
    vector<string> low, upp;

    string tmp;

    while (cin >> tmp)
        low.push_back(tmp);

    upp.resize(low.size());
    cout << "----------1----------\n";
    transform(low.begin(), low.end(), upp.begin(), op);
    for_each(upp.begin(), upp.end(), display);
    cout << endl;
    cout << "----------1----------\n";

    upp.clear();

    upp.resize(low.size());
    cout << "----------2----------\n";
    transform(low.begin(), low.end(), upp.begin(), OP());
    for_each(upp.begin(), upp.end(), display);
    cout << endl;

    return 0;
}

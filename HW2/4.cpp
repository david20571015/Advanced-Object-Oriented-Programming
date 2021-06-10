#include <iostream>
#include <string>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    for (int c = 0; c < test_cases; c++)
    {
        string s;
        cin >> s;

        string::size_type pos = 0, prev = 0;
        string result;
        while ((pos = s.find_first_not_of(s[prev],pos)) != string::npos)
        {
            if (pos - prev > 1)
                result += to_string(pos - prev);
            result += s[prev];
            prev = pos;
        }
        if (s.length() - prev > 1)
            result += to_string(s.length() - prev);
        result += s[prev];

        cout << result << endl;
    }

    return 0;
}
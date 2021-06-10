#include <iostream>
#include "sstring.h"

using namespace std;

int main()
{
    String s1, s2("123"), s3(s2);

    cout << "s1 : " << s1 << endl;
    cout << "s2 : " << s2 << endl;
    cout << "s3 : " << s3 << endl;

    String s4 = s2;

    cout << "s4 : " << s4 << endl;
    s4 += s3;
    cout << "s4+=s3 : " << s4 << endl;

    cout << "s4[4] : " << s4[4] << endl;

    String s5 = s4(2, 5);
    cout << "s4(2,5) : " << s5 << endl;

    String a("aacd"), b("abc");
    cout << "a>b : " << (a > b) << endl;
    cout << "a==b : " << (a == b) << endl;
    cout << "a<b : " << (a < b) << endl;

    String s6 = a + b;
    cout << "a+b : " << s6 << endl;

    return 0;
}
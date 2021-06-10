#include <iostream>
#include <cstdlib>
using namespace std;

void showbits(int n)
{
    for (int i = 31; i >= 0; i--)
        cout << (((1 << i) & n) ? "1" : "0");

    cout << endl
         << endl;
}

int main()
{
    int n;
    while (cin >> n)
        showbits(n);

    system("pause");
    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned short int resp[20];
    int eco, lan, paper;

    for (int i = 0; i < 20; i++)
    {
        cin >> eco >> lan >> paper;
        resp[i] = (1 << eco) + (1 << lan) + (1 << paper);
    }

    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < 20; i++)
    {
        if ((resp[i] & 0x08) && (resp[i] & 0x40))
            c1++;
        if ((resp[i] & 0x01) && (resp[i] & 0x100))
            c2++;
        if (resp[i] & 0x20)
            c3++;
    }

    cout << "The statistical data for the number of persons who read English daily : " << c1 << endl;
    cout << "The number of upper class who read tabloid : " << c2 << endl;
    cout << "The number of regional language readers : " << c3 << endl;

    system("pause");
    return 0;
}
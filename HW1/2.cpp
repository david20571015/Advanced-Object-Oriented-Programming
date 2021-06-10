#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    unsigned short int data, tmp;
    int year, month, day;

    cin >> year >> month >> day;
    data = ((year - 1900) << 9) + (month << 5) + day;

    cout << "year  : " << (((int)(data & 0xFE00) >> 9) + 1900) << endl;
    cout << "month : " << ((int)(data & 0x1E0) >> 5) << endl;
    cout << "day   : " << (int)(data & 0x1F) << endl;

    system("pause");
    return 0;
}
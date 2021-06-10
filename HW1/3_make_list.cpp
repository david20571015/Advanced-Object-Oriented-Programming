#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i = 0; i < 20; i++)
        cout << rand() % 3 << " " << rand() % 3 + 3 << " " << rand() % 3 + 6 << " " << endl;
}
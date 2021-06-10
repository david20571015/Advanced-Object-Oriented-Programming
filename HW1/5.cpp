#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int *stone;

    while (cin >> n, n)
    {
        int nim_sum = 0;
        stone = (int *)calloc(n, sizeof(int));
        for (int i = 0; i < n; i++)
        {
            cin >> stone[i];
            nim_sum ^= stone[i];
        }

        int msb;
        for (msb = 0; msb < 32; msb++)
            if (!(nim_sum >> msb))
                break;

        int count = 0;
        for (int i = 0; i < n; i++)
            if (stone[i] & (1 << (msb - 1)))
                count++;

        cout << count << endl;
        free(stone);
    }

    system("pause");
    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;

inline void factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
        fac *= i;
    cout << fac << endl;
}

inline void prime(int n)
{
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 2; i * i <= n; i++)
        if (!(n % i) && (n != i))
        {
            cout << "No" << endl;
            return;
        }
    cout << "Yes" << endl;
}

inline void OorE(int n)
{
    cout << ((n & 1) ? "Odd" : "Even") << endl;
}

inline void ex(int n)
{
    exit(0);
}

inline void operate(void (*fp)(int), int n)
{
    fp(n);
}

int main()
{
    void (*fp[4])(int) = {
        factorial, prime, OorE, ex};

    int n, op;
    while (1)
    {
        cout << "Enter a choice :\n"
             << "1. Factorial of a number\n"
             << "2. Prime or not\n"
             << "3. Odd or even\n"
             << "4. Exit\n";
        cin >> op;

        if (op != 4)
        {
            cout << "Enter the number : ";
            cin >> n;
        }

        operate(fp[op - 1], n);
        system("pause");
        system("cls");
    }

    system("pause");
    return 0;
}
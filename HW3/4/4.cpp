#include <iostream>
#include <cmath>

using namespace std;

inline double i(double t)
{
    return 0.5 * exp(-t / 1e-6);
}

double Integal(double a, double b, double n)
{
    double sum = i(a) + i(b);
    double h = (b - a) / n;
    for (double t = a + h; t <= b - h; t += h)
        sum += (2 * i(t));
    return sum * h / 2;
}

int main()
{
    double t0, t, v0, n;
    cin >> t0 >> t >> v0 >> n;
    cout << Integal(t0, t, n)/1e-7 + v0;
    return 0;
}
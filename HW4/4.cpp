#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Current
{
public:
    Current(int, double, int);
    void make_wave();
    void show();

private:
    int im, nt;
    double phi, tinc;
    double **wave;
};

Current::Current(int im, double phi, int nt)
{
    this->im = im;
    this->phi = phi;
    this->nt = nt;
    this->tinc = 1.0 / 60 / nt;

    wave = new double *[nt];
    for (int i = 0; i < nt; i++)
        wave[i] = new double[2];
}

void Current::make_wave()
{
    for (int i = 0; i < nt; i++)
    {
        wave[i][0] = tinc * i;
        wave[i][1] = im * sin(2 * M_PI * 60 * wave[i][0] + phi);
    }
}

void Current::show()
{
    for (int i = -im - 1; i <= im + 1; i++)
    {
        for (int j = 0; j < nt; j++)
        {
            if (wave[j][1] > 0)
            {
                if (i < 0 && i >= -wave[j][1])
                    cout << '*';
                else
                    cout << ' ';
            }
            else if (wave[j][1] < 0)
            {
                if (i > 0 && i <= -wave[j][1])
                    cout << '*';
                else
                    cout << ' ';
            }
        }
        cout << endl;
        if (i == -1)
            for (int j = 0; j < nt; j++)
                cout << '-';
    }
}

int main()
{
    int im, nt;
    double phi;
    cin >> im >> phi >> nt;

    Current c(im, phi, nt);
    c.make_wave();
    c.show();

    system("pause");
    return 0;
}
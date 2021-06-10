#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <windows.h>

using namespace std;

class Spacecraft
{
public:
    Spacecraft(const double &, const double &, const double &, const double &);
    inline double getXpos(const double &) const;
    inline double getYpos(const double &) const;
    void make_route(const double &, const double &);
    void show(const double &, const double &);

private:
    double vx, ax, vy, ay;
    double xmax, xmin, ymax, ymin;
    vector<pair<double, double>> r;
};

Spacecraft::Spacecraft(const double &vx, const double &ax, const double &vy, const double &ay)
{
    this->vx = vx;
    this->ax = ax;
    this->vy = vy;
    this->ay = ay;
}

inline double Spacecraft::getXpos(const double &t) const
{
    return vx * t + ax / 2.0 * t * t;
}

inline double Spacecraft::getYpos(const double &t) const
{
    return vy * t + ay / 2.0 * t * t;
}

void Spacecraft::make_route(const double &t0, const double &t1)
{
    for (double t = t0; t <= t1; t += 0.5)
        r.push_back(make_pair(getXpos(t), getYpos(t)));

    xmax = xmin = r.front().first;
    ymax = ymin = r.front().second;

    for (vector<pair<double, double>>::const_iterator i = r.cbegin(); i != r.cend(); i++)
    {
        xmax = max(xmax, (*i).first);
        xmin = min(xmin, (*i).first);
        ymax = max(ymax, (*i).second);
        ymin = min(ymin, (*i).second);
    }
}

void Spacecraft::show(const double &t0, const double &t1)
{
    this->make_route(t0, t1);
    for (vector<pair<double, double>>::const_iterator i = r.cbegin(); i != r.cend(); i++)
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),
                                 {static_cast<short>((*i).first - xmin), static_cast<short>((*i).second - ymin)});
        cout << '*';
    }
    cout << endl;
}

int main()
{
    Spacecraft s(5, 0, 0, 0.5);
    s.show(0, 10);
    system("pause");
    return 0;
}
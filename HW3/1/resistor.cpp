#include "resistor.h"

#include <iostream>
#include <string>
#include <cmath>

Resistor::Resistor()
{
    r[0] = r[1] = r[2] = r[3] = 0;
    res = tol = 0;
}

Resistor::~Resistor(){}

Resistor::Resistor(const double &r ,const double &t)
{
    this->res=r;
    this->tol=t;
}

Resistor::Resistor(const ColorCode &c1, const ColorCode &c2, const ColorCode &c3, const ColorCode &c4)
{
    r[0] = c1;
    r[1] = c2;
    r[2] = c3;
    r[3] = c4;
    switch (c4)
    {
    case 1:
        tol = 1;
        break;
    case 2:
        tol = 2;
        break;
    case 5:
        tol = 0.5;
        break;
    case 6:
        tol = 0.25;
        break;
    case 7:
        tol = 0.1;
        break;
    case 8:
        tol = 0.05;
        break;
    case -1:
        tol = 5;
        break;
    case -2:
        tol = 10;
        break;
    default:
        tol = 0;
        break;
    }
}

void Resistor::setColor(const ColorCode &c1, const ColorCode &c2, const ColorCode &c3, const ColorCode &c4)
{
    r[0] = c1;
    r[1] = c2;
    r[2] = c3;
    r[3] = c4;
    switch (c4)
    {
    case 1:
        tol = 1;
        break;
    case 2:
        tol = 2;
        break;
    case 5:
        tol = 0.5;
        break;
    case 6:
        tol = 0.25;
        break;
    case 7:
        tol = 0.1;
        break;
    case 8:
        tol = 0.05;
        break;
    case -1:
        tol = 5;
        break;
    case -2:
        tol = 10;
        break;
    default:
        tol = 0;
        break;
    }
}

void Resistor::showColor() const
{
    std::string color[12] = {
        "black",
        "brown",
        "red",
        "orange",
        "yellow",
        "green",
        "blue",
        "violet",
        "grey",
        "white",
        "gold",
        "silver"};

    std::cout << color[r[0]] << " " << color[r[1]] << " ";
    std::cout << ((r[2] >= 0) ? color[r[2]] : color[9 - r[2]]) << " ";
    std::cout << ((r[3] >= 0) ? color[r[3]] : color[9 - r[3]]) << std::endl;
}

void Resistor::computeR()
{
    res = (r[0] * 10 + r[1]) * pow(10, r[2]);

    switch (r[3])
    {
    case 1:
        tol = 1;
        break;
    case 2:
        tol = 2;
        break;
    case 5:
        tol = 0.5;
        break;
    case 6:
        tol = 0.25;
        break;
    case 7:
        tol = 0.1;
        break;
    case 8:
        tol = 0.05;
        break;
    case -1:
        tol = 5;
        break;
    case -2:
        tol = 10;
        break;
    default:
        tol = 0;
        break;
    }
}

void Resistor::setR(const double &r)
{
    this->res=r;
}

void Resistor::showR() const
{
    std::cout << res << "  "
              << "+-" << tol << "%" << std::endl;
}

Resistor Resistor::operator+(const Resistor &r1)
{
    Resistor tmp;
    tmp.res = this->res + r1.res;
    return tmp;
}

Resistor Resistor::operator||(const Resistor &r1)
{
    Resistor tmp;
    tmp.res = (this->res * r1.res) / (this->res + r1.res);
    return tmp;
}

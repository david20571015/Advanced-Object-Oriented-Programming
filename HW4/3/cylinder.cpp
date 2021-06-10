#include "cylinder.h"

Cylinder::Cylinder(int x, int y, double r, double h) : Circle(x, y, r)
{
    this->height = h;
}

void Cylinder::setHeight(double h)
{
    this->height = h;
}

double Cylinder::getHeight() const
{
    return this->height;
}

double Cylinder::getArea() const
{
    return Circle::getArea() * 2 + getCircumference() * getHeight();
}

double Cylinder::getVolume() const
{
    return Circle::getArea() * getHeight();
}

string Cylinder::getName() const
{
    return "Cylinder";
}

void Cylinder::print() const
{
    cout << '(' << getX()
         << ',' << getY()
         << ',' << getRadius()
         << ',' << getHeight()
         << ')';
}
#include "circle.h"

Circle::Circle(int x, int y, double r) : Point(x, y)
{
    this->radius = r;
}

void Circle::setRadius(double r)
{
    this->radius = r;
}

double Circle::getRadius() const
{
    return this->radius;
}

double Circle::getDiameter() const
{
    return getRadius() * 2;
}

double Circle::getCircumference() const
{
    return getRadius() * 2 * 3.14159265359;
}

double Circle::getArea() const
{
    return getRadius() * getRadius() * 3.14159265359;
}

string Circle::getName() const
{
    return "Circle";
}

void Circle::print() const
{
    cout << '(' << getX()
         << ',' << getY()
         << ',' << getRadius()
         << ')';
}
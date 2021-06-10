#include "circle.h"

Circle::Circle(int x, int y, double r)
{
    setX(x);
    setY(y);
    setRadius(r);
}

void Circle::setRadius(double _r)
{
    radius = _r;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getDiameter() const
{
    return getRadius() * 2;
}

double Circle::getCircumference() const
{
    return getRadius() * 2 * M_PI;
}

double Circle::getArea() const
{
    return getRadius() * getRadius() * M_PI;
}

string Circle::getName() const
{
    return "Circle";
}

void Circle::print() const
{
    cout << getName() << '(' << getX() << ',' << getY() << ',' << getRadius() << ')' << endl
         << "Diameter : " << getDiameter() << endl
         << "Circumference : " << getCircumference() << endl
         << "Area : " << getArea() << endl;
}
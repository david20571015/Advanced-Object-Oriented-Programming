#include "cylinder.h"

Cylinder::Cylinder(int x, int y, double r, double h)
{
    setX(x);
    setY(y);
    setRadius(r);
    setHeight(h);
}

void Cylinder::setHeight(double _h)
{
    height = _h;
}

double Cylinder::getHeight() const
{
    return height;
}

double Cylinder::getArea() const
{
    return Circle::getArea() * 2 + Circle::getCircumference() * getHeight();
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
    cout << getName() << '(' << getX() << ',' << getY() << ',' << getRadius() << ',' << getHeight() << ')' << endl
         << "Diameter : " << getDiameter() << endl
         << "Circumference : " << getCircumference() << endl
         << "Area : " << getArea() << endl
         << "Volume : " << getVolume() << endl;
}
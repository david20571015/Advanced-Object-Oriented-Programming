#include "point.h"

Point::Point(int x, int y)
{
    setX(x);
    setY(y);
}

void Point::setX(int _x)
{
    x = _x;
}

int Point::getX() const
{
    return x;
}

void Point::setY(int _y)
{
    y = _y;
}

int Point::getY() const
{
    return y;
}

string Point::getName() const
{
    return "Point";
}

void Point::print() const
{
    cout << getName() << '(' << getX() << ',' << getY() << ')' << endl;
}
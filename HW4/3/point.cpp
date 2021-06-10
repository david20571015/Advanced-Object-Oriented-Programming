#include "point.h"

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Point::setX(int x)
{
    this->x = x;
}

int Point::getX() const
{
    return x;
}

void Point::setY(int y)
{
    this->y = y;
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
    cout << '(' << getX()
         << ',' << getY()
         << ')';
}
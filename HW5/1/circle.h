#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle : public Point
{
public:
    Circle(int = 0, int = 0, double r = 0.0);
    void setRadius(double);
    double getRadius() const;
    double getDiameter() const;
    double getCircumference() const;
    virtual double getArea() const;
    virtual string getName() const;
    virtual void print() const;

private:
    double radius;
};

#endif

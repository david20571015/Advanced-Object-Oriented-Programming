#ifndef SHAPE_H
#define SHAPE_H

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
    virtual double getArea() const;
    virtual string getName() const = 0;
    virtual void print() const = 0;
};

#endif
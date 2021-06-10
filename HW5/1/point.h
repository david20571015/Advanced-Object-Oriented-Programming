#ifndef POINT_H
#define POINT_H

#include "shape.h"

class Point : public Shape
{
public:
    Point(int = 0, int = 0);
    void setX(int);
    int getX() const;
    void setY(int);
    int getY() const;
    virtual string getName() const;
    virtual void print() const;

private:
    int x;
    int y;
};

#endif
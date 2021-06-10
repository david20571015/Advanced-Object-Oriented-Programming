#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

class Point
{
public:
    Point(int = 0, int = 0);
    void setX(int);
    int getX() const;
    void setY(int);
    int getY() const;
    string getName() const; //return the name of shape
    void print() const;

    int x;
    int y;

private:
};

#endif
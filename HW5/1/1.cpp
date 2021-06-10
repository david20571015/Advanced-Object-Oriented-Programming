#include <iostream>
#include <vector>
#include "cylinder.h"

using namespace std;

void process(Shape *p)
{
     p->getName();
     p->print();
     p->getArea();

     if (dynamic_cast<Cylinder *>(p))
     {
          cout << "casting" << endl;
          dynamic_cast<Cylinder *>(p)->getVolume();
     }
}

int main()
{
     // -----------------1----------------
     Point p(0, 0);
     cout << p.getName() << endl;

     Circle c(1, 2, 3);
     cout << c.getName() << endl;

     Cylinder cy(1, 2, 3, 4);
     cout << cy.getName() << endl;

     // -----------------2-----------------
     vector<Shape *> shapeVector{&p, &c, &cy};

     for (auto i : shapeVector)
          process(i);

     return 0;
}

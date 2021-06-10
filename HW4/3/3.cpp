#include <iostream>
#include "cylinder.h"

using namespace std;

int main()
{
    Point p(1, 2);
    cout << p.getName() << endl;
    p.print();
    cout << endl
         << endl;

    Circle c(1, 2, 3);
    cout << c.getName() << endl;
    cout << "Diameter : " << c.getDiameter() << endl;
    cout << "Circumference : " << c.getCircumference() << endl;
    cout << "Area : " << c.getArea() << endl;
    c.print();
    cout << endl
         << endl;

    Cylinder cy(1, 2, 3, 4);
    cout << cy.getName() << endl;
    cout << "Area : " << cy.getArea() << endl;
    cout << "Volume : " << cy.getVolume() << endl;
    cy.print();
    cout << endl
         << endl;

    system("pause");
    return 0;
}

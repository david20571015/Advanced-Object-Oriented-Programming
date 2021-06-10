#include<iostream>
#include"resistor.h"

using namespace std;

int main(void)
{
    Resistor a;
    Resistor b(1000, 0.05);

    (a+b).showR();
    cout<<endl;
    a.setR(1000);
    (a||b).showR();
    cout<<endl;

    b.showColor();
    cout<<endl;
    ((a+b)||b).showR();
    cout<<endl;
    ((a||b)+a).showColor();
    cout<<endl;
    ((a||b)+a).showR();
    cout<<endl;

    return 0;
}
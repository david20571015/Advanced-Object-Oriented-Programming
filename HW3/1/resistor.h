#ifndef RESISTOR_H
#define RESISTOR_h

enum ColorCode
{
    black,
    brown,
    red,
    orange,
    yellow,
    green,
    blue,
    violet,
    grey,
    white,
    gold = -1,
    silver = -2
};

class Resistor
{
public:
    Resistor();
    Resistor(const double &, const double &);
    Resistor(const ColorCode &, const ColorCode &, const ColorCode &, const ColorCode &);
    ~Resistor();
    void setColor(const ColorCode &, const ColorCode &, const ColorCode &, const ColorCode &);
    void showColor() const;
    void computeR();
    void setR(const double &);
    void showR() const;
    Resistor operator+(const Resistor &);
    Resistor operator||(const Resistor &);

private:
    int r[4];
    double res;
    double tol;
};

#endif
#include <string.h>
#include <ctype.h>
#include <iostream>
using namespace std;

class String
{
public:
    String();
    String(const char *);
    String(const String &);
    ~String();
    String &operator=(const String &);
    void operator+=(const String &);
    char operator[](int);
    String operator()(int, int);
    friend bool operator<(const String &, const String &);
    friend bool operator>(const String &, const String &);
    friend bool operator==(const String &, const String &);
    friend String operator+(const String &, const String &);
    friend ostream &operator<<(ostream &, String &);
    friend istream &operator>>(istream &, String &);

private:
    char *str;
    int len;
};

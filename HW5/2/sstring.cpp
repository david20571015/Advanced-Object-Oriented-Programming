#include "sstring.h"

String::String()
{
    len = 0;
    str = new char[len];
}

String::String(const char *s)
{
    for (len = 0; *(s + len) != '\0'; len++)
        ;

    str = new char[len];
    for (int i = 0; i < len; i++)
        str[i] = *(s + i);
}

String::String(const String &s)
{
    len = s.len;
    str = new char[len];
    for (int i = 0; i < len; i++)
        str[i] = s.str[i];
}

String::~String()
{
    delete[] str;
}

String &String::operator=(const String &s)
{
    len = s.len;
    delete[] str;
    str = new char[len];
    for (int i = 0; i < len; i++)
        str[i] = s.str[i];
    return *this;
}

void String::operator+=(const String &s)
{
    String tmp(*this);
    len += s.len;
    delete[] str;
    str = new char[len];

    int i;
    for (i = 0; i < tmp.len; i++)
        str[i] = tmp.str[i];
    for (; i < tmp.len + s.len; i++)
        str[i] = s.str[i - tmp.len];
}

char String::operator[](int pos)
{
    if (pos > -0 && pos < this->len)
        return str[pos];
    return '\0';
}

String String::operator()(int fromLoc, int toLoc)
{
    String s;
    s.len = toLoc - fromLoc + 1;
    s.str = new char[s.len];
    for (int i = 0; i < s.len; i++)
        s.str[i] = str[fromLoc + i];
    return s;
}

bool operator<(const String &s1, const String &s2)
{
    if (s1.len < s2.len)
        return 1;
    if (s1.len > s2.len)
        return 0;
    int i;
    for (i = 0; i < s1.len; i++)
    {
        if (s1.str[i] > s2.str[i])
            return 0;
        if (s1.str[i] < s2.str[i])
            return 1;
    }
    return 0;
}

bool operator>(const String &s1, const String &s2)
{
    if (s1.len > s2.len)
        return 1;
    if (s1.len < s2.len)
        return 0;
    int i;
    for (i = 0; i < s1.len; i++)
    {
        if (s1.str[i] < s2.str[i])
            return 0;
        if (s1.str[i] > s2.str[i])
            return 1;
    }
    return 0;
}

bool operator==(const String &s1, const String &s2)
{
    if (s1.len != s2.len)
        return 0;
    for (int i = 0; i < s1.len; i++)
        if (s1.str[i] != s2.str[i])
            return 0;
    return 1;
}

String operator+(const String &s1, const String &s2)
{
    String s(s1);
    s += s2;
    return s;
}

ostream &operator<<(ostream &output, String &s)
{
    for (int i = 0; i < s.len; i++)
        output << s.str[i];
    return output;
}

istream &operator>>(istream &input, String &s)
{
    char c[100];
    input >> c;
    s = String(c);
    return input;
}
#include "string2.h"

#include <cctype>
#include <cstring>
#include <iostream>
using std::cin;
using std::cout;

String::String(const char *s)
{
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
}
String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
}
String::String(const String &s)
{
    len = s.len;
    str = new char[len + 1];
    strcpy(str, s.str);
}
String::~String() { delete[] str; }
void String::Stringlow()
{
    for (int i = 0; i < len; i++) str[i] = tolower(str[i]);
}
void String::Stringup()
{
    for (int i = 0; i < len; i++) str[i] = toupper(str[i]);
}
int String::has(char c)
{
    int n = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == c) n++;
    }
    return n;
}
String &String::operator=(const String &st)
{
    if (this == &st) return *this;
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    strcpy(str, st.str);
    return *this;
}
String &String::operator=(const char *s)
{
    delete[] str;
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    return *this;
}
char &String::operator[](int i) { return str[i]; }
const char &String::operator[](int i) const { return str[i]; }

bool operator<(const String &st1, const String &st2)
{
    return strcmp(st1.str, st2.str) < 0;
}
bool operator>(const String &st1, const String &st2) { return st2 < st1; }
bool operator==(const String &st1, const String &st2)
{
    return strcmp(st1.str, st2.str) == 0;
}
String operator+(const String &st1, const String &st2)
{
    String res;
    res.len = st1.len + st2.len;
    res.str = new char[res.len + 1];
    strcpy(res.str, st1.str);
    strcpy(res.str + st1.len, st2.str);
    return res;
}
ostream &operator<<(ostream &os, const String &st)
{
    os << st.str;
    return os;
}
istream &operator>>(istream &is, String &st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is) st = temp;
    while (is && is.get() != '\n') continue;
    return is;
}

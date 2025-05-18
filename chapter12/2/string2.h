#pragma once
#include <iostream>
using std::istream;
using std::ostream;

class String
{
private:
    char *str;
    int len;
    static const int CINLIM = 80;

public:
    String(const char *s);
    String();
    String(const String &s);
    ~String();
    int length() const { return len; }
    void Stringlow();
    void Stringup();
    int has(char c);

    String &operator=(const String &);
    String &operator=(const char *);
    char &operator[](int i);
    const char &operator[](int i) const;

    friend bool operator<(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);
    friend String operator+(const String &st1, const String &st2);
    friend ostream &operator<<(ostream &os, const String &st);
    friend istream &operator>>(istream &is, String &st);
};

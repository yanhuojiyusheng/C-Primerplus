#pragma once
#include <string>
using std::string;
class Person
{
public:
    Person() {lname = ""; fname[0]='\0';}
    Person(const string& ln,const char* fn="Heyyou");
    void Show() const;
    void FormalShow() const;
    ~Person() {}

private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
};


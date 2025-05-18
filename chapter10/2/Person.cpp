#include "Person.h"
#include <iostream>
#include <cstring>
using std::cout;

Person::Person(const string& ln,const char* fn){
    lname = ln;
    strcpy(fname, fn);
}
void Person::Show() const{
    cout << fname << " " << lname << std::endl;
}
void Person::FormalShow() const{
    cout << lname << " " << fname << std::endl;
}

#include "classic.h"

#include <cstring>
#include <iostream>

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    performers = new char[strlen(s1) + 1];
    strcpy(performers, s1);
    label = new char[strlen(s2) + 1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d)
{
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd()
{
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}
Cd::~Cd()
{
    delete[] performers;
    delete[] label;
}
void Cd::Report() const
{
    using std::cout;
    using std::endl;
    cout << "performers is " << performers << endl;
    cout << "     label is " << label << endl;
    cout << "selections is " << selections << endl;
    cout << "  playtime is " << playtime << endl;
}
Cd &Cd::operator=(const Cd &d)
{
    if (this == &d) return *this;
    delete[] performers;
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    delete[] label;
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic()
{
    name = new char[1];
    name[0] = '\0';
}
Classic::Classic(const char *s1, const char *s2, const char *s3, int n,
                 double x)
    : Cd(s2, s3, n, x)
{
    name = new char[strlen(s1) + 1];
    strcpy(name, s1);
}
Classic::Classic(const Classic &cl) : Cd(cl)
{
    name = new char[strlen(cl.name) + 1];
    strcpy(name, cl.name);
}
Classic::~Classic(){
    delete [] name;
}
void Classic::Report() const
{
    using std::cout;
    using std::endl;
    Cd::Report();
    cout << "main album is " << name << endl;
}
Classic &Classic::operator=(const Classic &cl)
{
    if (this == &cl) return *this;
    Cd::operator=(cl);
    delete [] name;
    name = new char[strlen(cl.name)+1];
    strcpy(name, cl.name);
    return *this;
}

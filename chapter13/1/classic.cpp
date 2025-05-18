#include "classic.h"

#include <cstring>
#include <iostream>

Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd &d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
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
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic() { name[0] = '\0'; }
Classic::Classic(const char *s1, const char *s2, const char *s3, int n,
                 double x)
    : Cd(s2, s3, n, x)
{
    strcpy(name, s1);
}
Classic::Classic(const Classic &cl) : Cd(cl) { strcpy(name, cl.name); }
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
    strcpy(name, cl.name);
    return *this;
}

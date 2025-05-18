#include "stonewt.h"

#include <iostream>
using std::cout;
Stonewt::Stonewt(double lbs, Mode form)
{
    mode = form;
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    mode = form;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}
bool Stonewt::operator<(const Stonewt &s) { return pounds < s.pounds; }
bool Stonewt::operator>(const Stonewt &s) { return pounds > s.pounds; }
bool Stonewt::operator<=(const Stonewt &s) { return pounds <= s.pounds; }
bool Stonewt::operator>=(const Stonewt &s) { return pounds >= s.pounds; }
bool Stonewt::operator==(const Stonewt &s) { return pounds == s.pounds; }
bool Stonewt::operator!=(const Stonewt &s) { return pounds != s.pounds; }
Stonewt Stonewt::operator+(const Stonewt &s)
{
    return Stonewt(pounds + s.pounds);
}
Stonewt Stonewt::operator-(const Stonewt &s)
{
    return Stonewt(pounds - s.pounds);
}
Stonewt Stonewt::operator-() { return Stonewt(-pounds); }
Stonewt operator*(const Stonewt &s1, const Stonewt &s2)
{
    return Stonewt(s1.pounds * s2.pounds);
}
std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
    if (s.mode == Stonewt::STONE) {
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    } else if (s.mode == Stonewt::POUND) {
        os << s.pounds << " float pounds\n";
    } else {
        os << int(s.pounds) << " int pounds\n";
    }
    return os;
}
std::istream & operator>>(std::istream &os,Stonewt & s){
    double temp;
    os >> temp;
    s = Stonewt(temp);
    return os;
}

#pragma once
#include <iostream>

class Stonewt
{
public:
    enum Mode { STONE, POUND, INT };

private:
    enum { Lbs_per_stn = 14 };
    int stone;
    double pds_left;
    double pounds;
    Mode mode;

public:
    Stonewt(double lbs, Mode form = STONE);
    Stonewt(int stn, double lbs, Mode form = STONE);
    Stonewt()
    {
        stone = pounds = pds_left = 0;
        mode = STONE;
    }
    void stoneMode() { mode = STONE; }
    void poundMode() { mode = POUND; }
    void intMode() { mode = INT; }
    ~Stonewt(){};
    bool operator<(const Stonewt &s);
    bool operator>(const Stonewt &s);
    bool operator<=(const Stonewt &s);
    bool operator>=(const Stonewt &s);
    bool operator==(const Stonewt &s);
    bool operator!=(const Stonewt &s);
    Stonewt operator+(const Stonewt &s);
    Stonewt operator-(const Stonewt &s);
    Stonewt operator-();
    friend Stonewt operator*(const Stonewt &s1, const Stonewt &s2);
    friend std::ostream &operator<<(std::ostream &os, const Stonewt &);
    friend std::istream &operator>>(std::istream &os, Stonewt &);
};


#pragma once
#include <string>
#include <utility>
#include <valarray>
using std::string;
typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;
class Wine
{
private:
    string label;
    int year;
    PairArray data;

public:
    Wine(const char* l, int y, const int yr[], const int bot[]);
    Wine(const char* l, int y);
    void GetBottles();
    string& Label() { return label; }
    int sum() const;
    void Show() const;
};

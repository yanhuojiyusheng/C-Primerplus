#pragma once
#include <string>
#include <utility>
#include <valarray>
using std::string;
typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;
class Wine : private string, private PairArray
{
private:
    int year;

public:
    Wine(const char* l, int y, const int yr[], const int bot[]);
    Wine(const char* l, int y);
    void GetBottles();
    string& Label() { return *this; }
    int sum() const;
    void Show() const;
};

#pragma once
#include <iostream>
using std::ostream;
class Stock
{
private:
    char *company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    Stock();
    Stock(const char *co, long n = 0, double pr = 0.0);
    Stock(const Stock &s);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    const Stock &topval(const Stock &s) const;
    Stock &operator=(const Stock &s);
    friend ostream &operator<<(ostream &os, const Stock s);
};

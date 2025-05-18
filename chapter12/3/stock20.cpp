#include "stock20.h"

#include <cstring>
#include <iostream>

Stock::Stock() : shares(0), share_val(0.0), total_val(0.0)
{
    company = new char[]{"no name"};
}
Stock::Stock(const char *co, long n, double pr)
{
    company = new char[strlen(co) + 1];
    strcpy(company, co);
    if (n < 0) {
        std::cout << "Number of shares can't be negative; " << company
                  << " shares set to 0.\n";
        shares = 0;
    } else
        shares = n;
    share_val = pr;
    set_tot();
}
Stock::Stock(const Stock &s)
{
    shares = s.shares;
    share_val = s.share_val;
    total_val = s.total_val;
    company = new char[strlen(s.company) + 1];
    strcpy(company, s.company);
}
Stock::~Stock() { delete[] company; }
void Stock::buy(long num, double price)
{
    if (num < 0) {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction ia aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0) {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    } else if (num > shares) {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}
Stock &Stock::operator=(const Stock &s)
{
    if (this == &s) return *this;
    shares = s.shares;
    share_val = s.share_val;
    total_val = s.total_val;
    delete[] company;
    company = new char[strlen(s.company) + 1];
    strcpy(company, s.company);
    return *this;
}
ostream &operator<<(ostream &os, const Stock s)
{
    using std::cout;
    using std::ios_base;

    ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = os.precision(3);

    os << "Company: " << s.company << "  Shares: " << s.shares << '\n';
    os << "  Share Price: $" << s.share_val;
    cout.precision(2);
    os << " Total worth: $" << s.total_val << '\n';

    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}

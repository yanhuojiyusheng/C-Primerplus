#include "emp.h"
using std::cin;
using std::cout;
using std::endl;
abstr_emp::abstr_emp() : fname(""), lname(""), job("") {}
abstr_emp::abstr_emp(const std::string &fn, const std::string &ln,
                     const std::string &j)
    : fname(fn), lname(ln), job(j)
{
}

abstr_emp::~abstr_emp() {}
void abstr_emp::ShowAll() const
{
    cout << "fname is " << fname << endl
         << "lname is " << lname << endl
         << "job   is " << job << endl;
}
void abstr_emp::SetAll()
{
    cout << "请输入fname :";
    cin >> fname;
    cout << "请输入lname :";
    cin >> lname;
    cout << "请输入job   :";
    cin >> job;
}
std::ostream &operator<<(std::ostream &os, const abstr_emp &e)
{
    os << e.fname << "  " << e.lname << endl;
    return os;
}
employee::employee() {}
employee::employee(const std::string &fn, const std::string &ln,
                   const std::string &j)
    : abstr_emp(fn, ln, j)
{
}
void employee::ShowAll() const { abstr_emp::ShowAll(); }
void employee::SetAll() { abstr_emp::SetAll(); }
void manager::Data() const { cout << "inchargeof is " << inchargeof << endl; }
void manager::setData()
{
    cout << "请输入inchargeof :";
    cin >> inchargeof;
}
manager::manager() : abstr_emp(), inchargeof(0) {}
manager::manager(const abstr_emp &e, int ico) : abstr_emp(e), inchargeof(ico) {}
manager::manager(const manager &m) : abstr_emp(m), inchargeof(m.InChargeOf()) {}
manager::manager(const std::string &fn, const std::string &ln,
                 const std::string &j, int ico)
    : abstr_emp(fn, ln, j), inchargeof(ico)
{
}
void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    Data();
}
void manager::SetAll()
{
    abstr_emp::SetAll();
    setData();
}
void fink::Data() const { cout << "reportsto is " << endl; }
void fink::setData()
{
    cout << "请输入 reportsto: ";
    cin >> reportsto;
}
fink::fink() : abstr_emp(), reportsto("") {}
fink::fink(const abstr_emp &e, const std::string &rpo)
    : abstr_emp(e), reportsto(rpo)
{
}
fink::fink(const fink &e) : abstr_emp(e), reportsto(e.reportsto) {}
fink::fink(const std::string &fn, const std::string &ln, const std::string &j,
           const std::string &rpo)
    : abstr_emp(fn, ln, j), reportsto(rpo)
{
}
void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    Data();
}
void fink::SetAll()
{
    abstr_emp::SetAll();
    setData();
}
highfink::highfink() {}
highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico)
    : abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}
highfink::highfink(const fink &f, int ico) : abstr_emp(f), manager(f, ico) {}
highfink::highfink(const manager &m, const std::string &rpo)
    : abstr_emp(m), fink(m, rpo)
{
}
highfink::highfink(const highfink &h)
    : highfink(manager(h), h.fink::ReportsTo())
{
}
highfink::highfink(const std::string &fn, const std::string &ln,
                   const std::string &j, const std::string &rpo, int ico)
    : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}
void highfink::ShowAll() const
{
    manager::ShowAll();
    fink::Data();
}
void highfink::SetAll()
{
    manager::SetAll();
    fink::setData();
}

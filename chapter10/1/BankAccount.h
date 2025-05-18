#pragma once
#include <string>
using std::string;
class BankAccount
{
public:
    BankAccount() {}
    BankAccount(string n,string a, double d=0) :name(n),account(a),deposit(d){}
    void withdraw(double n);
    void depositm(double n);
    void showm() const ; 
    ~BankAccount() {}

private:
    string name;
    string account;
    double deposit;
    
};


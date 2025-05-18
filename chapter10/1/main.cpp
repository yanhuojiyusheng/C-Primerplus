#include <iostream>
#include "BankAccount.h"
int main()
{
    BankAccount b{"bueryi", "12812481"};
    b.showm();
    b.depositm(100.21);
    b.showm();
    b.withdraw(1000);
    b.depositm(800);
    b.showm();
    return 0;
}


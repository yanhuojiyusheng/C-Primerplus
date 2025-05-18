#include <iostream>
#include "sales.h"
int main()
{
    using namespace SALES;
    double s[4]{1.123, 34.45, 23.4 , 4.5};
    Sales a(s,4);
    Sales b;
    a.showSales();
    b.showSales();
    return 0;
}


#include <iostream>
#include "sales.h"
int main()
{
    using namespace SALES;
    Sales a;
    Sales b;
    double s[4]{1.123, 34.45, 23.4 , 4.5};
    setSales(a,s,4);
    setSales(b);
    showSales(a);
    showSales(b);
    return 0;
}


#include <iostream>
#include "port.h"

int main()
{
    Port a("Gallo","tawny",20);
    Port b(a);
    b.Show();
    cout <<b <<endl;
    b-=11;
    b+=23;
    b.Show();
    VintagePort x("nick",12,"Old Velvet",25);
    VintagePort y(x);
    y.Show();
    cout << y <<endl;
    return 0;
}


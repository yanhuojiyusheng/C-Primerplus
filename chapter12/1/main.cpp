#include <iostream>

#include "cow.h"
int main()
{
    using namespace std;
    Cow a;
    Cow b("hick", "eating grass", 87);
    Cow c(b);
    Cow e;
    e = b;
    cout << "default a" << endl;
    a.ShowCow();
    cout << "b is" << endl;
    b.ShowCow();
    cout << "c is" << endl;
    c.ShowCow();
    cout << "e is" << endl;
    e.ShowCow();
    return 0;
}


#include <iostream>
#include "Plorg.h"
int main()
{
    using namespace std;
    Plorg plone;
    Plorg pltwo("bueryi", 120);
    plone.show();
    pltwo.show();
    cout << "change CI\n";
    plone.setCI(50);
    plone.show();
    return 0;
}


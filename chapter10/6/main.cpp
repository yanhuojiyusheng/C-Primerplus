#include <iostream>
#include "Move.h"
int main()
{
    using namespace std;
    Move m1;
    Move m2(12,5.7);
    cout << "m1 ";
    m1.showmove();
    cout << "m2 ";
    m2.showmove();
    Move m3 = m1.add(m2);
    cout << "m1+m2 " ;
    m3.showmove();
    m1.reset(12.5,1.9);
    cout << "reset m1\n";
    cout << "m1 ";
    m1.showmove();
    m3 = m1.add(m2);
    cout << "m1+m2 " ;
    m3.showmove();

    return 0;
}


#include <iostream>
#include "List.h"
void scale(Item & n){
    n = n*1.8;
}
int main()
{
    using namespace std;
    List li;
    li.add(10.2);
    li.add(2.7);
    li.add(100);
    li.add(7.9);
    li.show();
    li.visit(scale);
    li.show();
    return 0;
}


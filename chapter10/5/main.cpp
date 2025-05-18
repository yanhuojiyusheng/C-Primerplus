#include <iostream>
#include "stack.h"
int main()
{
    Stack stack;
    customer cus;
    stack.push({"wxy",12});
    stack.push({"bueryi",20.76});
    stack.push({"sad",2.2});
    stack.show();
    stack.pop(cus);
    stack.show();
    stack.pop(cus);
    stack.show();
    stack.pop(cus);
    stack.show();

    return 0;
}


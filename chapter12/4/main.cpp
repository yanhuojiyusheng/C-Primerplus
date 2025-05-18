#include <iostream>

#include "stack.h"
int main()
{
    using namespace std;
    Stack s1;
    cout << "s1 isempty " << s1.isempty() << endl;
    s1.push(12);
    s1.push(1);
    s1.push(2);
    s1.push(10);
    s1.push(1008);
    Stack s2(100);
    s2 = s1;
    Item a;
    s2.pop(a);
    cout << a << endl;
    Stack s3(s2);

    return 0;
}


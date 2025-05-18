#include <iostream>
#include "golf.h"
int main()
{
    const int SIZE= 10;
    golf array[SIZE];
    int i;
    for( i=0;i<SIZE;i++){
        if(array[i].setgolf()==0)
            break;
    }
    int n = i;
    for(int i=0;i<n;i++){
        array[i].showgolf();
    }
    array[0].hand(100);
    for(int i=0;i<n;i++){
        array[i].showgolf();
    }

    return 0;
}


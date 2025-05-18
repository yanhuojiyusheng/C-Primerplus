#include <iostream>
#include "golf.h"
int main()
{
    const int SIZE= 10;
    golf array[SIZE];
    int i;
    for( i=0;i<SIZE;i++){
        if(setgolf(array[i])==0)
            break;
    }
    int n = i;
    for(int i=0;i<n;i++){
        showgolf(array[i]);
    }
    handicap(array[0], 100);
    for(int i=0;i<n;i++){
        showgolf(array[i]);
    }

    return 0;
}


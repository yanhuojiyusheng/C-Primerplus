#include <iostream>
#include <array>
int main()
{
    using namespace std;
    const int AR_SIZE = 101;
    array<long double, AR_SIZE> factorials;
    factorials[0]=factorials[1]=1;
    for(int i=2;i<AR_SIZE;i++){
        factorials[i]=factorials[i-1]*i;
    }
    for(int i=0;i<AR_SIZE;i++){
        cout<<i << "!= " << factorials[i]<<endl;
    }
    return 0;
}


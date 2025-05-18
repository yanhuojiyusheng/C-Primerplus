#include <iostream>
long double factorial(long double n){
    if(n==0) return 1.0;
    return n*factorial(n-1);
}
int main()
{
    using namespace std;
    int n;
    cout << "请输入一个整数计算阶乘: ";
    while(cin >> n){
        cout << n <<" 的阶乘为 " << factorial(n)<<endl;
        cout << "请继续输入: ";
    }
    cout <<"end\n";
    return 0;
}


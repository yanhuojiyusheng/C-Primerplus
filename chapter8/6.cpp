#include <iostream>
#include <cstring>
template <typename T>
T maxn(T a[], int n){
    T t = a[0];
    for(int i=1;i<n;i++){
        if(t<a[i]){
            t = a[i];
        } 
    }
    return t;
}
template <> const char* maxn(const char* a[],int n){
    const char* p = a[0];
    int m = strlen(a[0]);
    for(int i=1;i<n;i++){
        if(m < strlen(a[i])){
            m = strlen(a[i]);
            p = a[i];
        }
    }
    return p;
}
int main()
{
    int a[6]{1,214,15,56,47,8};
    double b[4]{-1.54,4.26,3.23,21};
    const char* str[5]{"hello", "bueryi","WXY","next","template" };
    using std::cout;
    cout << maxn(a,6) << std::endl;
    cout << maxn(b,4) << std::endl;
    cout << maxn(str,5) << std::endl;
    return 0;
}


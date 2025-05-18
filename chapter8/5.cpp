#include <iostream>

template <typename T>
T max5(T a[]){
    T t = a[0];
    for(int i=1;i<5;i++){
        if(t<a[i]){
            t = a[i];
        } 
    }
    return t;
}
int main()
{
    int a[5]{1,214,15,5647,8};
    double b[5]{-1.54,4.26,3.23,23.7,21};
    using std::cout;
    cout << max5(a) << std::endl;
    cout << max5(b) << std::endl;
    return 0;
}


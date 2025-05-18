#include <iostream>

int main()
{
    using namespace std;
    int low;
    int high;
    long result=0;
    cout << "请输入两个整数"<<endl;
    cout << "第一个较小的整数: ";
    cin >> low;
    cout << "第二个较大的整数: ";
    cin >> high;
    cout << low <<" 到 " << high<<" 之间所有整数和为 ";
    for(;low<=high;low++){
        result +=low;
    }
    cout << result <<endl;
    return 0;
}


#include <iostream>

int main()
{
    using namespace std;
    cout << "请输入你的身高(英寸)____\b\b\b\b";
    int feet;
    cin >> feet;
    const int factor=12;
    cout << "你的身高为 "<< feet/factor<< "英尺 " << feet%factor << "英寸\n";
    return 0;
}


#include <iostream>
#include <string.h>
using namespace std;
struct pizza{
    string company;
    float diameter;
    float weight;
};
int main()
{
    pizza piz;
    cout << "请输入公司名: ";
    getline(cin, piz.company);
    cout << "请输入披萨饼的直径: ";
    cin >> piz.diameter;
    cout << "请输入披萨饼的重量: ";
    cin >> piz.weight;

    cout << piz.company << " 生产的披萨饼直径为 "<< piz.diameter
        << " 重达 " << piz.weight<<endl;
    return 0;
}


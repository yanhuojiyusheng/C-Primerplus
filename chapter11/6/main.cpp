#include <iostream>

#include "stonewt.h"
int main()
{
    using std::cin;
    using std::cout;
    Stonewt stones[6]{170, 27.8, {11,0}};
    Stonewt temp(11, 0);
    Stonewt minstone(__INT_MAX__);
    Stonewt maxstone;
    int num = 0;
    cout << "请输入三个数\n";
    for (int i = 3; i < 6; i++) {
        cout << "第 " << i - 2 << " 个: ";
        cin >> stones[i];
    }
    for (int i = 0; i < 6; i++) {
        if (stones[i] >= temp) num++;
        if (stones[i] > maxstone) maxstone = stones[i];
        if (stones[i] < minstone) minstone = stones[i];
    }
    cout << "共有 " << num << " 个元素大于或等于11英石" << std::endl;
    cout << "最大的元素为 " << maxstone;
    cout << "最小的元素为 " << minstone;
    return 0;
}


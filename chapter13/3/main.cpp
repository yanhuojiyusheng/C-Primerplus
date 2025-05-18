#include <iostream>
#include <string>

#include "dma.h"
int main()
{
    using namespace std;
    const int LIMITS = 4;
    DMA* dmas[LIMITS];
    for (int i = 0; i < LIMITS; i++) {
        string label;
        int rating;
        char kind;
        cout << "请输入标签名: ";
        cin >> label;
        cout << "请输入等级: ";
        cin >> rating;
        cout << "请选择类型 1是base 2是 lacks 3是 has: ";
        while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
            cout << "请输入1或2或3: ";
        if (kind == '1') {
            dmas[i] = new baseDMA(label.data(),
                                  rating);  // 由于string不能直接传给const
                                            // char*，需要用data方法取出数据
        } else if (kind == '2') {
            string color;
            cout << "请输入颜色: ";
            cin >> color;
            dmas[i] = new lacksDMA(color.data(), label.data(), rating);
        } else {
            string style;
            cout << "请输入风格";
            cin >> style;
            dmas[i] = new hasDMA(style.data(), label.data(), rating);
        }
    }
    for (int i = 0; i < LIMITS; i++) {
        dmas[i]->View();
    }
    for (int i = 0; i < LIMITS; i++) {
        delete dmas[i];
    }
    return 0;
}


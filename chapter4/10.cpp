#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<float,3> score;
    cout << "请输入你三次跑步的成绩(s)\n";
    cout << "请输入第一次的成绩: ";
    cin >> score[0];
    cout << "请输入第二次的成绩: ";
    cin >> score[1];
    cout << "请输入第三次的成绩: ";
    cin >> score[2];
    cout << "一共跑了三次，平均成绩为 " << (score[0]+score[1]+score[2])/3.<<endl;
    return 0;
}


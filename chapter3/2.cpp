#include <iostream>

int main()
{
    using namespace std;
    const int footToInch=12;
    const float inchToMeter=0.0254;
    const float poundToKG = 1/2.2;
    float feet;
    float inches;
    float weight;
    cout << "请输入你的身高,按英尺 英寸的形式输入: ";
    cin>>feet;
    cin>>inches;
    cout<< "请输入你的体重(磅): ";
    cin >> weight;
    float meter = (feet*footToInch+inches)*inchToMeter;
    float kg = weight*poundToKG;
    cout << "你的BMI为 "<< kg/(meter*meter)<<endl;

        
    return 0;
}


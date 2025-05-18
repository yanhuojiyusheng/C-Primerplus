#include <iostream>

int main()
{
    using namespace std;
    const double LV_1_RATE=0.1;
    const double LV_2_RATE=0.15;
    const double LV_3_RATE=0.20;
    double income=0;
    cout << "请输入你的收入计算个人所得税: ";
    while(cin>>income && income>0){
       double tax;
       cout << "收入为 " << income << " tvarps时,所得税为 ";
       if(income <= 5000){
           tax =0;
       }else if(income >5000 && income <=15000){
           tax = (income-5000)*0.1;
       }else if(income > 15000 && income <= 35000){
           tax = 10000*LV_1_RATE+(income-15000)*LV_2_RATE;
       }else{
           tax = 10000*LV_1_RATE+20000*LV_2_RATE+(income-35000)*LV_3_RATE;
       }
       cout << tax << " tvarps " <<endl;
       cout << "请继续输入：" ;
    }
    cout << "结束计算\n";
    return 0;
}


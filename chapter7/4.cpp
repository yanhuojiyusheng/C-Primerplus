#include <iostream>
long double probability(unsigned numbers,unsigned picks){
    long double result =1.0;
    long double n;
    unsigned p;
    for(n=numbers, p=picks;p>0;n--,p--){
        result = result * p/n;
    }
    return result;
}
int main()
{
    using namespace std;
    double field ,fieldChoice, select;
    cout << "请输入域号码的数量和选择号码的数量，以及特选号码的个数\n";
    while((cin >> field >> fieldChoice >> select) && fieldChoice <= field){
        cout << "你获胜的几率为 " << probability(field,fieldChoice)*(1/select) <<endl;
        cout << "接下来的三个数字(输入q退出): ";
    }
    cout << "end\n";
    return 0;
}


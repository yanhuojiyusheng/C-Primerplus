#include <iostream>

int main()
{
    using namespace std;
    double fuelConsumption;
    const double kilometer100ToMiles = 62.14;
    const double gallonToLiter = 3.875;
    cout << "请输入你的百公里耗油量: ";
    cin >> fuelConsumption;
    cout << "相当于 " << kilometer100ToMiles/(fuelConsumption/gallonToLiter) <<" 加仑每英里"<<endl; 
    return 0;
}


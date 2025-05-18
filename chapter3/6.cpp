#include <iostream>

int main()
{
    using namespace std;
    double distance;
    double gasoline;
    cout << "请输入距离(公里): ";
    cin >> distance;
    cout << "请输入消耗汽油量: ";
    cin >> gasoline;
    cout << "每100公里消耗 " << gasoline/distance*100 << " 升汽油"<<endl;
    
    return 0;
}


#include <iostream>
double harmonicMean(double x, double y){
    return 2*x*y/(x+y);
}
int main()
{
    using namespace std;
    double x;
    double y;
    cout << "请输入两个数用于计算调和平均数,输入0停止"<<endl;
    while(cin>>x && cin >>y && x*y!=0){
        cout << x <<  " 和 " << y << " 的调和平均数为 "
            << harmonicMean(x,y)<<endl;
    }
    
    return 0;
}


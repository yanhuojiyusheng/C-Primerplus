#include <iostream>
int main()
{
    const int MAX =10;
    using namespace std;
    double donation[MAX];
    cout << "请输入donation值: "<<endl;
    int i=0;
    while(i<MAX && cin>>donation[i]){
        i++;
    }
    double ave = 0;
    for(int j=0;j<i;j++){
        ave+=donation[j];
    }
    ave = ave/i;
    int n =0 ;
    for(int j=0;j<i;j++){
        if(donation[j]>ave){
            n++;
        }
    }
    cout << "平均数为 " << ave << " 共有 " <<n<<" 个数大于平均数"<<endl;
    return 0;
}


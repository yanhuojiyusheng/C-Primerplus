#include <iostream>
#include <string>
int main()
{
    using namespace std;
    const int MONTHNUM=12;
    const string MONTH[MONTHNUM] {
        "一月", "二月","三月","四月","五月","六月",
        "七月","八月","九月","十月","十一月","十二月"
    };
    int sales[3][MONTHNUM];
    int all =0;
    for(int j=0;j<3;j++){
        cout << "请输入第 " << j+1<< " 年的销售记录"<<endl;
        for(int i=0;i<MONTHNUM;i++){
            cout << "请输入"<<MONTH[i] << "的销售额 ";
            cin >> sales[j][i];
            all += sales[j][i];
        }
    }
    cout << "总销售额为 " << all <<" 元\n";
    return 0;
}


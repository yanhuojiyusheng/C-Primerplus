#include <iostream>
int main()
{
    using namespace std;
    long long result=0;
    cout << "请输入数字，输入0时停止" <<endl;
    int temp;
    cin >> temp;
    while(temp !=0){
        result += temp;
        if(cin.get()=='\n'){
            cout << "目前的总和为 "<< result<<endl;
        }
        cin >> temp;
    }


    return 0;
}


#include <iostream>
using namespace std;
int input(double * score, int size){
    cout << "请输入高尔夫成绩,非数字提前退出"<<endl;
    int i=0;
    for(;i<size&&cin>>score[i];i++);
    return i;//返回实际上的成绩数量
}
void display(double* score,int size){
    for(int i=0;i<size;i++){
        cout << score[i] << ' ';
    }
    cout << endl;
}
double average(double* score,int size){
    double sum=0;
    for(int i=0;i<size;i++){
        sum+=score[i];
    }
    return sum/size;
}
int main()
{
    const int ARRAYSIZE=10;
    int n = ARRAYSIZE;
    double score[ARRAYSIZE];
    n = input(score,n);
    display(score,n);
    cout << "平均值为 " << average(score,n) << endl;
    return 0;
}


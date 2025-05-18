#include <iostream>
double calculate(double, double, double (*)(double,double));
double add(double, double);
double minus(double,double);
double multiply(double,double);
int main()
{
    double (*pf[3])(double,double){add, minus, multiply};
    using namespace std;
    cout << "请输入两个值进行计算: ";
    double x,y;
    while(cin>>x && cin>>y){
        cout << "add: " << calculate(x,y,pf[0]) 
            << " \tminus: " << calculate(x,y,pf[1])
            << " \tmultiply: " << calculate(x,y,pf[2])<<endl;
        cout << "请继续输入: ";
    }
    return 0;
}
double calculate(double x, double y, double (*pf)(double,double)){
    return pf(x,y);
}
double add(double x, double y){
    return x+y;
}
double minus(double x, double y){
    return add(x,-y);
}
double multiply(double x, double y){
    return x*y;
}

#include <iostream>
#include "sales.h"
namespace SALES{
    void setSales(Sales & s, const double ar[], int n){
        s.sales[0] = ar[0];
        s.min = s.max = s.average = ar[0];
        for(int i=1;i<QUARTERS;i++){
            s.average += ar[i];
            s.sales[i] = ar[i];
            if( s.min > ar[i] ){
                s.min = ar[i];
            }
            if( s.max < ar[i] ){
                s.max = ar[i];
            }
        }
        s.average /= QUARTERS;
    }
    void setSales(Sales & s){
        using std::cout;
        using std::cin;
        s.average = 0;
        cout << "请输入四个售价\n";
        for(int i=0;i<QUARTERS;i++){
            cout << "第"<<i+1 <<"个: ";
            cin >> s.sales[i];
            s.average += s.sales[i];
        }
        s.average/=QUARTERS;
        s.min = s.max = s.sales[0];
        for(int i=1;i<QUARTERS;i++){
            s.min = std::min(s.min, s.sales[i]);
            s.max = std::max(s.max, s.sales[i]);
        }
    }
    void showSales(const Sales & s){
        for(int i=0;i<QUARTERS;i++){
            std::cout << s.sales[i] << ' ';
        }
        std::cout << std::endl;
        std::cout << "max is " << s.max << std::endl;
        std::cout << "min is " << s.min << std::endl;
        std::cout << "average is " << s.average << std::endl;
    }
}

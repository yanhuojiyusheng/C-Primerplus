#include <iostream>
#include "sales.h"
namespace SALES{
    Sales::Sales(const double ar[], int n){
        sales[0] = ar[0];
        min = max = average = ar[0];
        for(int i=1;i<QUARTERS;i++){
            average += ar[i];
            sales[i] = ar[i];
            if( min > ar[i] ){
                min = ar[i];
            }
            if( max < ar[i] ){
                max = ar[i];
            }
        }
        average /= QUARTERS;
    }
    Sales::Sales(){
        using std::cout;
        using std::cin;
        average = 0;
        cout << "请输入四个售价\n";
        for(int i=0;i<QUARTERS;i++){
            cout << "第"<<i+1 <<"个: ";
            cin >> sales[i];
            average += sales[i];
        }
        average/=QUARTERS;
        min = max = sales[0];
        for(int i=1;i<QUARTERS;i++){
            min = std::min(min, sales[i]);
            max = std::max(max, sales[i]);
        }
    }
    void Sales::showSales() const{
        for(int i=0;i<QUARTERS;i++){
            std::cout << sales[i] << ' ';
        }
        std::cout << std::endl;
        std::cout << "max is " << max << std::endl;
        std::cout << "min is " << min << std::endl;
        std::cout << "average is " << average << std::endl;
    }
}

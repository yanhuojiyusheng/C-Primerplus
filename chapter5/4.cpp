#include <iostream>

int main()
{
    using namespace std;
    const double DEPOSIT=100;
    const double singleMargin=0.1;
    const double compoundMargin=0.05;
    double DaphneProfit=0;
    double CleoProfit=0;
    int year=0;
    while(CleoProfit<=DaphneProfit){
        CleoProfit += (DEPOSIT+CleoProfit)*compoundMargin;
        DaphneProfit += DEPOSIT*singleMargin;
        year++;
    }
    cout << year << " 年后Cleo的利润超过Daphne \n"
        << "Cleo 的利润为 " << CleoProfit<<endl
        << "Daphne 的利润为 " << DaphneProfit << endl;
    return 0;
}


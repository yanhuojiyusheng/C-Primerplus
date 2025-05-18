#include <iostream>
using namespace std;
double lightYearToAstronomicalUnit(double year){
    return year*63240;
}
int main()
{
    cout << "Enter the number of light years: ";
    double lightYear;
    cin >> lightYear;
    cout << lightYear << " light years = "<<lightYearToAstronomicalUnit(lightYear);
    cout << " astronomical units\n";
    return 0;
}


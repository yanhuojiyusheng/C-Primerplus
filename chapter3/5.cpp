#include <iostream>

int main()
{
    using namespace std;
    long long worldPopulation;
    long long usPopulation;
    cout << "Enter the world's population: ";
    cin >> worldPopulation;
    cout << "Enter the population of the US: ";
    cin >> usPopulation;
    cout << "The population of the US is " << 100.0*usPopulation/worldPopulation;
    cout << "% of the world population.\n";
    return 0;
}


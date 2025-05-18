#include <iostream>
const int Seasons = 4;
const char* Snames[4]{"Spring", "Summer", "Fall", "Winter"};
void fill(double* pa){
    using namespace std;
    for(int i=0;i<Seasons ;i++){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}
void show(const double* da){
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i=0; i< Seasons;i++){
        cout << Snames[i] << ": $" << da[i]<<endl;
        total += da[i];
    }
    cout << "Total Expense: $" << total << endl;
}
int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}


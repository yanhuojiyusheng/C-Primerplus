#include <iostream>
const int Seasons = 4;
const char* Snames[4]{"Spring", "Summer", "Fall", "Winter"};
struct expense{
    double cost[4];
};
void fill(expense* pa){
    using namespace std;
    for(int i=0;i<Seasons ;i++){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->cost[i];
    }
}
void show(expense da){
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i=0; i< Seasons;i++){
        cout << Snames[i] << ": $" << da.cost[i]<<endl;
        total += da.cost[i];
    }
    cout << "Total Expense: $" << total << endl;
}
int main()
{
    expense exp;
    fill(&exp);
    show(exp);
    return 0;
}


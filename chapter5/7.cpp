#include <iostream>
#include <string>
using namespace std;
struct car{
    string manufacturer;
    int year;
};
int main()
{
    int carNum;
    car* carArray;
    cout << "How many cats do you wish to catalog? ";
    cin >> carNum;
    cin.get();
    carArray = new car [2];
    for(int i=0;i<carNum;i++){
        cout << "Car #"<<i<<" :"<<endl
            <<"Please enter the make: ";
        getline(cin,carArray[i].manufacturer);
        cout << "Please enter the year made: ";
        cin >> carArray[i].year;
        cin.get();
    }
    cout << "Here is your collection:"<<endl;
    for(int i=0;i<carNum;i++){
        cout<<carArray[i].year<<" "<<carArray[i].manufacturer<<endl;
    }
    delete [] carArray;
    return 0;
}


#include <iostream>
using namespace std;
struct Patron{
    string name;
    double fund;
};
int main()
{
    int numOfPatron;
    string grandPatrons;
    string normalPatrons;
    cout << "请输入捐款者的数目： ";
    (cin >> numOfPatron).get();
    Patron* patrons = new Patron[numOfPatron];
    for(int i=0;i<numOfPatron;i++){
        cout << "请输入捐款者的姓名: ";
        getline(cin,patrons[i].name);
        cout << "请输入捐款的数目: ";
        cin >> patrons[i].fund;
        cin.get();
    }
    cout << "Grand Patrons: ";
    for(int i=0;i<numOfPatron;i++){
        if(patrons[i].fund > 10000){
            cout << patrons[i].name << ' '<<patrons[i].fund << ' ';
        }
    }
    cout << endl << "Patrons: ";
    for(int i=0;i<numOfPatron;i++){
        if(patrons[i].fund <= 10000){
            cout << patrons[i].name << ' '<<patrons[i].fund << ' ';
        }
    }
    cout << endl;
    return 0;
}


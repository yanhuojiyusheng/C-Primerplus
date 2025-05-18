#include <iostream>
#include <fstream>
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
    ifstream inFile;
    inFile.open("donate.txt");
    (inFile >> numOfPatron).get();
    Patron* patrons = new Patron[numOfPatron];
    for(int i=0;i<numOfPatron;i++){
        getline(inFile,patrons[i].name);
        inFile >> patrons[i].fund;
        inFile.get();
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


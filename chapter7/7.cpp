#include <iostream>
const int Max = 5;
double* fill_array(double begin[], double end[]);
void show_array(const double begin[], const double end[]);
void revalue(double r, double bedin[], double end[]);
int main()
{
    using namespace std;
    double properties[Max];
    double* end = fill_array(properties,properties+Max);
    show_array(properties,end);
    if(end > properties){
        cout << "Enter revaluation factor: ";
        double factor;
        while(!(cin>>factor)){
           cin.clear();
           while(cin.get() != '\n')
               continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    return 0;
}
double* fill_array(double begin[], double end[]){
    using namespace std;
    double temp;
    int i;
    for(i=0;begin+i<end;i++){
        cout << "Enter value #" << (i+1) << ": ";
        cin >> temp;
        if(!cin){// bad input
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *(begin+i) = temp;
    }
    return begin+i;
}
void show_array(const double begin[], const double end[]){
    using namespace std;
    for(int i=0;begin+i<end;i++){
        cout << "Property #" << (i+1) << ": $";
        cout << begin[i] << endl;
    }
}
void revalue(double r, double begin[], double end[]){
    while(begin < end){
        *(begin++) *= r;
    }
}

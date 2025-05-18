#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int N;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target){
        cout << "Enter step length: ";
        if(!(cin >> dstep))
            break;
        cout << "Enter the Number of test: ";
        if(!(cin >> N))
            break;
        int maxN = 0;
        int minN = __INT_MAX__;
        double total = 0.0;
        for(int i=0;i<N;i++){
            while(result.magval() < target){
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++ ; 
            }
            if(steps > maxN) maxN = steps;
            if(steps < minN) minN = steps;
            total+=steps;
            steps = 0;
            result.reset(0.0, 0.0);
        }
        cout << N << "test result\n";
        cout << "max step: " << maxN << endl
             << "min step: " << minN << endl
             << "average step: " << total/N << endl;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}


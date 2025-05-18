#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    ofstream outFile;
    outFile.open("walk.txt");
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target){
        cout << "Enter step length: ";
        if(!(cin >> dstep))
            break;
        outFile << "Target Distance: "<< target 
                << ", Step Size: " << dstep;
        outFile << "\n0: (x,y) = (0,0)\n";
        while(result.magval() < target){
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++ ; 
            outFile << steps << ": (x,y) = ("<< result.xval()
                <<","<< result.yval() << ")\n";
        }
        // 文件写入
        outFile << "After " << steps << " steps, the subject "
            "has the following location:\n";
        outFile << result << endl;
        result.polar_mode();
        outFile << " or\n" << result << endl;
        outFile << "Average outward distance per step = "
             << result.magval()/steps << endl;

        // 标准输出
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        result.rect_mode();
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
             << result.magval()/steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    outFile.close();
    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}


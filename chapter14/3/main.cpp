#include <cstring>
#include <iostream>

#include "workermi.h"
#include "QueueTp.hpp"
const int SIZE = 5;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    Queue<Worker*> lolas(SIZE);
    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter the employee category:\n"
             << "w: waiter  s: singer  " << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL) {
            cout << "Please enter a, w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q') break;
        switch (choice) {
            case 'w':
                lolas.push(new Waiter);
                break;
            case 's':
                lolas.push(new Singer);
                break;
            case 't':
                lolas.push(new SingingWaiter);
                break;
        }
        cin.get();
        lolas.back()->Set();
    }
    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++) {
        cout << endl;
        auto temp =lolas.pop(); 
        temp->Show();
        delete temp;
    }
    cout << "Bye.\n";
    return 0;
}


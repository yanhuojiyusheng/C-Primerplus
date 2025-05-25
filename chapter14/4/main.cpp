#include <cstring>
#include <iostream>

#include "person.h"
const int SIZE = 5;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    Person *lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter the person category:\n"
             << "g: Gunslinger p: PokerPlayer  " << "b: BadDude q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL) {
            cout << "Please enter a, g, p, b, or q: ";
            cin >> choice;
        }
        if (choice == 'q') break;
        switch (choice) {
            case 'g':
                lolas[ct] = new Gunslinger("bu", "eryi", 12.1, 3);
                break;
            case 'p':
                lolas[ct] = new PokerPlayer;
                break;
            case 'b':
                lolas[ct] = new BadDude;
                break;
        }
        cin.get();
    }
    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++) {
        cout << endl;
        lolas[i]->Show();
    }
    for (i = 0; i < ct; i++) delete lolas[i];
    cout << "Bye.\n";
    return 0;
}


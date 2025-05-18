#include <iostream>
#include <cstring>
using namespace std;
void strcount(const string str);
int main()
{
    string input;
    cout << "Enter a line:\n";
    getline(cin, input);
    while(!input.empty()){
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}
void strcount(const string str)
{
    static int total = 0;
    int count = str.size();
    cout << "\"" << str << "\" contains ";
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";

}


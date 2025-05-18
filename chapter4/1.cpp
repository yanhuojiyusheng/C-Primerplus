#include <iostream>
#include <string.h>
int main()
{
    using namespace std;
    string firstName;
    string lastName;
    char grade;
    int age;
    cout << "What is your first name? ";
    getline(cin,firstName);
    cout << "What is your lastName? ";
    getline(cin,lastName);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is yout age? ";
    cin >> age;
    cout << "Name: "<< lastName << ", "<<firstName<<endl;
    cout << "Grade: "<<char(grade+1)<<endl;
    cout << "Age: " << age << endl;
    return 0;
}


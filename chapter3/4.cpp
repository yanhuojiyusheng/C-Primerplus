#include <iostream>

int main()
{
    using namespace std;
    const int dayToHour = 24;
    const int hourToMinute = 60;
    const int minuteToSecond = 60;

    long long seconds;

    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds = ";
    int days = seconds/(dayToHour*hourToMinute*minuteToSecond);
    seconds =  seconds - days*dayToHour*hourToMinute*minuteToSecond;
    int hours = seconds/(hourToMinute*minuteToSecond);
    seconds = seconds - hours*hourToMinute*minuteToSecond;
    int minutes = seconds/(minuteToSecond);
    seconds = seconds - minutes*minuteToSecond;
    cout << days << " days, ";
    cout << hours << " hours, "<< minutes<<" minutes, ";
    cout << seconds <<" seconds\n";
    return 0;
}



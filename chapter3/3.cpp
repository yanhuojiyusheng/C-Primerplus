#include <iostream>

int main()
{
    using namespace std;
    double degrees;
    double minutes;
    double seconds;
    const int degreeToMinute = 60;
    const int minuteToSecond = 60;
    cout << "Enter a  latitude in degrees, minutes, and seconds: "<<endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    cout << degrees << " degrees, "<<minutes<<" minutes, "<<seconds;
    cout << " seconds = "<< degrees+(minutes+seconds*(1./minuteToSecond))*(1./degreeToMinute)<< " degrees\n";
    
    return 0;
}


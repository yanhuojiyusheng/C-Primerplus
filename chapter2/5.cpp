#include <iostream>
using namespace std;

float celsiusToFahrenheit(float t){
    return t *1.8 +32;
}
int main()
{
    float temperature;
    cout << "Please enter a Celsius value: ";
    cin >> temperature;
    cout << temperature << " degrees Celsius is "<<celsiusToFahrenheit(temperature);
    cout << " degrees Fahrenheit."<<endl;
    return 0;
}


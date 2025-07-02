#include <iostream>
using namespace std;
int main(){

    float celcius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celcius;
    fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    /*
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celcius = (fahrenheit - 32.0) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << celcius << "°C" << endl;
    */

    return 0;
}
#include <iostream>
using namespace std; 
int main(){

    int x;
    cin >> x; // Input an integer value
    float f = x; // Implicit conversion from int to float
    cout << "Integer: " << x << endl; // Output the integer value
    cout << "Float: " << f << endl; // Output the float value

    /*
    float x;
    cin >> x; // Input a float value
    int i = x; // Implicit conversion from float to int
    cout << "Float: " << x << endl; // Output the float value
    cout << "Integer: " << i << endl; // Output the integer value
    */

    return 0;
} 
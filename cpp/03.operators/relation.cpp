#include <iostream>
using namespace std;
int main(){

    float a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;  
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "a >= b: " << (a >= b) << endl;

    return 0;
}
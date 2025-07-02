#include <iostream>
using namespace std;
int main() {

    float a;
    cout << "Enter a number: ";
    cin >> a;
    float b = ++a;
    cout << "Pre-increment: " << b << endl;
    b = a++;
    /*
    cout << "Post-increment: " << b << endl;
    b = --a;
    cout << "Pre-decrement: " << b << endl;
    b = a--;
    cout << "Post-decrement: " << b << endl;
    */
    
return 0;
}
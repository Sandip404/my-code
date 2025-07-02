#include <iostream>
using namespace std;
int main(){

    float a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "AND operation (a && b): " << (a && b) << endl;
    cout << "OR operation (a || b): " << (a || b) << endl;
    cout << "NOT operation (!a): " << (!a) << endl;
    cout << "NOT operation (!b): " << (!b) << endl;

    return 0;
}
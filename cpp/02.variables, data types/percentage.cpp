#include <iostream>
using namespace std;
int main(){

    int a,b,c,d,e;
    cout << "Enter your marks : ";
    cin >> a >> b >> c >> d >> e;
    int percentage = (a + b + c + d + e) / 5;
    cout << "Your percentage is : " << percentage << "%" << endl;
    return 0;
}
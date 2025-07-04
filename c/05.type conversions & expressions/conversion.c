#include <stdio.h>
int main(){

    char ch = 65; // ASCII value for 'A'
    int x = (int)ch; // Implicit conversion from char to int
    printf("after conversion, x = %d\n", x);

    return 0;
}
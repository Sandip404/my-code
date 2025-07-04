#include <stdio.h>
int main(){

    int x;
    char ch;
    float f;
    double d;
    long l;
    short s;
    printf("Size of int: %zu bytes\n", sizeof(x));
    printf("Size of char: %zu bytes\n", sizeof(ch));
    printf("Size of float: %zu bytes\n", sizeof(f));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of long: %zu bytes\n", sizeof(l));
    printf("Size of short: %zu bytes\n", sizeof(s));

    return 0;
}
#include <stdio.h>
int main(){

    int x = 10;
    float y = 20.5;
    char z = 'A';
    const double PI = 3.14159265358979323846; 
    char STRING[] = "Hello, World!";

    printf("Integer: %d\n", x); // Format specifier for integer
    printf("Float: %.2f\n", y); // Format specifier for float with 2 decimal places
    printf("Character: %c\n", z); // Format specifier for character
    printf("Constant PI: %.15f\n", PI); // Format specifier for double with 15 decimal places
    printf("String: %s\n", STRING); // Format specifier for string

    return 0;
}
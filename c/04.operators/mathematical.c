#include <stdio.h>
int main(){

    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Addition: %f\n", a + b);
    printf("Subtraction: %f\n", a - b);
    printf("Multiplication: %f\n", a * b);
    if (b != 0) {
        printf("Division: %f\n", a / b);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
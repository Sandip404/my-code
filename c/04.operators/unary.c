#include <stdio.h>
int main(){

    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Unary plus (+a): %d\n", +a);
    printf("Unary minus (-a): %d\n", -a);
    printf("Increment (a++): %d\n", a++);
    printf("Decrement (b--): %d\n", b--);
    printf("After increment, a: %d\n", a);
    printf("After decrement, b: %d\n", b);

    return 0;
}
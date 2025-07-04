#include <stdio.h>
int main(){

int a, b;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);
printf("Logical AND (a > 0 && b > 0): %d\n", a > 0 && b > 0);
printf("Logical OR (a > 0 || b > 0): %d\n", a > 0 || b > 0);
printf("Logical NOT (!a): %d\n", !a);
printf("Logical NOT (!b): %d\n", !b);

    return 0;
}
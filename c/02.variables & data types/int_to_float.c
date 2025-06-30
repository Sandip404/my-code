// take float input and print the fractional part of the number

#include <stdio.h>
int main(){
    float x;
    printf("Enter the value of the float : ");
    scanf("%f",&x);
    int y = x;
    float z = x - y;
    printf("the fractional part of the float number %f would be : %f",x,z);
    return 0;
}
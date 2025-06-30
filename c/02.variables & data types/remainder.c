//take two integers input, a and b:a>b, and find the remainder when a is divided by b

#include <stdio.h>
int main(){
    int a,b; //a>b
    printf("enter the value of dividend : ");
    scanf("%d",&a);
    printf("enter the value of divisor : ");
    scanf("%d",&b);
    /*int r = a%b;
    printf("the remainder when %d divided by %d is : %d",a,b,r);*/
    int q = a/b;
    int r = a - b*q; //Remainder = dividend - divisor*quotient
    printf("the remainder when %d divided by %d is : %d",a,b,r);
}
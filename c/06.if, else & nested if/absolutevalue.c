//take any integer input and get it's absolute value as output

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the value : ");
    scanf("%d",&a);
    if(a<0){
        a=a*(-1);
    }
    printf("The absolute value is : %d",a);
    return 0;

}
#include <stdio.h>
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    int sum=0;
    int lastDigit=0;
    while(n!=0){

        lastDigit=n%10;
        if(lastDigit%2!=0)
        sum= sum + lastDigit;
        n=n/10;
    }
    printf("Sum of odd digits in the given number is %d\n",sum);
    return 0;
}
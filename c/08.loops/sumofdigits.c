#include <stdio.h>
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    int sum=0;
    int lastDigit=0;
    while(n!=0){
        
        sum= sum + lastDigit;
        lastDigit=n%10;
        n=n/10;
    }
    printf("Sum of digits in the given number is %d\n",sum+1);
    return 0;
}
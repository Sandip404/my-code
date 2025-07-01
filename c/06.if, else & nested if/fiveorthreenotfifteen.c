//make a program to take input divisible by 3 or 5 not 15

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if( n%5==0 || n%3==0){
        if(n%15!=0){
            printf("%d is divisible by both 5 or 3 but not 15",n);
        }
    }
    else{
        printf("%d is not divisible by both 5 and 3",n);
    }
    return 0;
}
#include <stdio.h>
int main(){
    int n;
    prinf("Enter a number : ");
    scanf("%d",&n);
    if(n>5){
        printf("%d is greater than 5",n);
    }
    else{
        printf("%d is less than 5",n);
    }
    return 0;
}
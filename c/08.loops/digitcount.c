#include <stdio.h>
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("Number of digits in the given number is %d\n",count);
    return 0;
}
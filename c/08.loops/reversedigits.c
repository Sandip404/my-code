#include <stdio.h>
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("Reverse of even digits in the given number is %d\n",r);
    return 0;
}
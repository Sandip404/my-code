#include <stdio.h>
int main(){
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    (n%2==0) ? printf("even") : printf("odd");
    return 0;
}
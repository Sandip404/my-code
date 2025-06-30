#include <stdio.h>
int main(){
    int n;
    printf("\nEnter a number for Row : ");
    scanf("%d",&n);
    int a=1;
    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a++;
        }printf("\n");
    }
    return 0;
}
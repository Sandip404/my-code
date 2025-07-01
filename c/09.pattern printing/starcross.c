#include <stdio.h>
int main() {
    int n;
    printf("\nEnter a number for Row : ");
    scanf("%d", &n);
    if(n%2==0)printf("\nThe number entered is invalid for forming a cross sign pattern.\n");
    else
    printf("\n");
    for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(i==j || i+j==n+1) printf("*");
        else printf(" ");
    }printf("\n");
    }
    return 0;
}
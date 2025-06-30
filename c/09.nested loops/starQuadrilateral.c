#include <stdio.h>
int main(){
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<i; k++){
            printf("*");
        }
        for(int l=0; l<n+1-i; l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }

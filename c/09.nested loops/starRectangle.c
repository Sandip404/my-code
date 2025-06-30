#include <stdio.h>
int main(){
    int n;
    printf("\nEnter a number for row : ");
    scanf("%d", &n);
    int m;
    printf("\nEnter a number for column : \n");
    scanf("%d", &m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
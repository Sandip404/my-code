#include <stdio.h>
int main(){
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    int nst=1;
    int nsp=3;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        nsp=nsp-1;
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}

/*#include <stdio.h>
int main(){
    int n;
    printf("\nEnter a number for a no. of line : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            if(j>=n-i+1 && j<=n+i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }printf("\n");
    }
    
    return 0;
}*/
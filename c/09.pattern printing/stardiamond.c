#include <stdio.h>
int main(){
    int n;
    printf("\nEnter a number for no. of line : ");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;
    if(n%2==0) printf("This input is invalid for a diamond pattern. Please enter an odd number. \n");
    else 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }else {
            nsp++;
            nst-=2;
        }printf("\n");
    }
    return 0;
}
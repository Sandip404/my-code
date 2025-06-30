#include <stdio.h>
int main(){
    int n;
    printf("\nEnter a number for row : ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){int a=1;
        for(int j=1; j<=i; j++){
            if(i%2==0){int b=a+64;
        char ch=(char)b;
            printf("%c ",ch);
            a++;}
            else{printf("%d ",a);a++;}
        }
        printf("\n");
    }
    return 0;
}
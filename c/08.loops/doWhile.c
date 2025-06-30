#include <stdio.h>
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    int i=10;
    do{
        printf("%d ",i*n);
        i++;
    }while(i<=n);
    return 0;
}
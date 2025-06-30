#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int m;
    printf("Enter the times upto which table of %d should be : ",n);
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        printf("%d \n",n*i);
    }
    return 0;
}
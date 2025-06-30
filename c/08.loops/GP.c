#include <stdio.h>
int main(){
    int n;
    int a = 1;
    printf("Enter a value : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d \n",a);
        a=a*2;
    }
    return 0;
}
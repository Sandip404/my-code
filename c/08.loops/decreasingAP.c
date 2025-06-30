#include <stdio.h>
int main(){
    int n;
    int a=100;
    printf("Enter a value : ");
    scanf("%d",&n);
    for(int i=100;a>0;i++){
        printf("%d \n",a);
        a=a-3;
    }
    return 0;
}
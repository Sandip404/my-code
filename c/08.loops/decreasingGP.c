#include <stdio.h>
int main(){
    int n;
    float a=100;
    printf("Enter a value : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d \n",a);
        a=a/2;
    }
    return 0;
}

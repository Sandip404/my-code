#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a base no. : ");
    scanf("%d",&a);
    printf("Enter a power no. : ");
    scanf("%d",&b);
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    printf("The value of  base %d to the power %d is : %d\n",a,b,p);
    return 0;
}
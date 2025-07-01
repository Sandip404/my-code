#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first value : ");
    scanf("%d",&a);
    printf("Enter the second value : ");
    scanf("%d",&b);
    printf("Enter the third value : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
            printf("%d is greater than both %d and %d",a,b,c);
        else
            printf("%d is greater than both %d and %d",c,a,b);
    }
    else{
        if(b>c)
            printf("%d is greater than both %d and %d",b,a,c);
        else
            printf("%d is greater than both %d and %d",c,a,b);
    }
    if(a==b){
        if(b==c){
            if(c==a){
                printf("All three numbers have same value");
            }
        }
    }
    return 0;
}
// take three integer input and determine the greatest of them

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first value : ");
    scanf("%d",&a);
    printf("Enter the second value : ");
    scanf("%d",&b);
    printf("Enter the third value : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("The %d is greater than both %d and %d",a,b,c);
    }
    if(b>a && b>c){
        printf("The %d is greater than both %d and %d",b,a,c);
    }
    if(c>b && c>a){
        printf("The %d is greater than both %d and %d",c,b,a);
    }
    if(a==b && b==c && c==a){
        printf("The three inputs have same value %d",a);
    }
    return 0;
}
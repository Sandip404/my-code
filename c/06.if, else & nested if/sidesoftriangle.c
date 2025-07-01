// take three inputs to find if they can form a triangle

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first value : ");
    scanf("%d",&a);
    printf("Enter the second value : ");
    scanf("%d",&b);
    printf("Enter the third value : ");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("Triangle can be formed by the input of these three values");
    }
    else{
        printf("Triangle cannot be formed by the input of these three values");
    }
    return 0;
}
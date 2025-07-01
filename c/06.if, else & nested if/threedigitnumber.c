// take input to find if the number is three digit

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>99 && n<999){
        printf("%d is a three digit number",n);
    }
    else{
        printf("%d is not a three digit number",n);
    }
    return 0;
}
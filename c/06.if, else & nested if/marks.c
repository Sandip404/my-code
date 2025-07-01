#include <stdio.h>
int main(){
    int n;
    printf("Enter the percentage : ");
    scanf("%d",&n);
    if(n>90){
        printf("Outstanding");
    }
    else if(n>80){
        printf("A grade");
    }
    else if(n>60){
        printf("B grade");
    }
    else if(n>40){
        printf("C grade");
    }
    else{
        printf("Fail");
    }
    return 0;
}
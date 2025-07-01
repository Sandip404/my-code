// take selling and cost prices as input and predict profit or lose as input

#include <stdio.h>
int main(){
    int cp,sp;
    printf("Enter the cost price : ");
    scanf("%d",&cp);
    printf("Enter the selling price : ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("you made a profit");
    }
    if(sp==cp){
        printf("neither profit nor loss");
    }
    else{
        printf("you made a lose");
    }
    return 0;
}
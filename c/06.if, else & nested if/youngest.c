// take inputs from three persons to determine the youngest one

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first value : ");
    scanf("%d",&a);
    printf("Enter the second value : ");
    scanf("%d",&b);
    printf("Enter the third value : ");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("The first person is younger than both second and third person");
    }
    if(b<a && b<c){
        printf("The second person is younger than both first and third person");
    }
    if(c<b && c<a){
        printf("The third person is younger than both second and first person");
    }
    if(a==b && b==c && c==a){
        printf("All the three persons are of same age");
    }
    return 0;
}
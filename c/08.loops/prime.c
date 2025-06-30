
#include<stdio.h>
int main(){
    int n;
    printf("Enter a value : ");
    scanf("%d", &n);
    int i;
    int a=0;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
        }
        if(n==1){
            printf("%d is neither prime nor composite\n",n);
            return 0;  // Exit the program if n is 1
        }
        if(a==0){
        printf("%d is a prime number\n",n);
        }
        else{
        printf("%d is a composite number\n",n);
        return 0;
        }
    
    return 0;
}
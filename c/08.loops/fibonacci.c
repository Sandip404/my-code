#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int f1=0;
    int f2=1;
    int f3=1;
    for(int i=1;i<=n-2;i++){
        
        f1=f2+f3;
        f2=f3;
        f3=f1; 
        if(i=1){ 
        printf("the fibonacci value of 1st no. is : %d\n",f1); break;
        }
        else if(i=2){ 
        printf("the fibonacci value of 2nd no. is : %d\n",f2); 
        }
        else if(i=3){
        printf("the fibonacci value of 3rd no. is : %d\n",f3); 
        }
        else{
        printf("the fibonacci value of %dth no. is : %d\n",i,f1);
        }
    }
    
    return 0;
}
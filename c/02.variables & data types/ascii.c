#include <stdio.h>
int main(){
    int x=65;                //char ch = A;
    printf("%d",x);          //printf(%c",ch);
    char ch = (char)x;       //int x=(int)ch;
    printf("\n%c",ch);       //printf("\n%d",x);
    return 0;
}
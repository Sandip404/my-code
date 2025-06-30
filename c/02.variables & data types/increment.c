#include <stdio.h>
int main(){
    int x=3,y,z;
    x=++x;
    y=x++-z;
    z=x++;
    printf("%d %d %d",x,y,z);
    return 0;
}

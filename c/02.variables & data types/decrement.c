#include <stdio.h>
int main(){
    int x=1,y=2,z=3;
    x=x--+y;
    y=--y+z;
    z=--z+x--;
    printf("%d %d %d",x,y,z);

    return 0;
}
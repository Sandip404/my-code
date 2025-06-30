#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates :");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0){
        printf("Point (%d,%d) lies in the first quadrant.\n",x,y);
    }
    else if(x<0 && y>0){
        printf("Point (%d,%d) lies in the second quadrant.\n",x,y);
    }
    else if(x<0 && y<0){
        printf("Point (%d,%d) lies in the third quadrant.\n",x,y);
    }
    else if(x>0 && y<0){
        printf("Point (%d,%d) lies in the fourth quadrant.\n",x,y);
    }
    else if(x==0 && y==0) {
        printf("lies in the origin");
    }
    else if(x==0){
        printf("Point (%d,%d) lies on the y-axis.\n",x,y);
    }
    else if(y==0){
        printf("Point (%d,%d) lies on the x-axis.\n",x,y);
    }
    return 0;
}

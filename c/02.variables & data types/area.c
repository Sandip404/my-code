

//H.W/C.W  write a program to print/display area of circle with given radius


#include <stdio.h>
int main(){
    
    float r; //radius of circle
    printf("Enter radius : ");
    scanf("%f",&r); //input for radius
    float S = (3.1415*r*r); //area of circle
    printf("The Area of the circle is : %f",S);
    printf(" square units");

    return 0;

}


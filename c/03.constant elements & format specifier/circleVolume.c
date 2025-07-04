#include <stdio.h>
int main(){

const double PI = 3.14159265358979323846; // Constant for Pi
const double RADIUS = 5.0; // Constant for radius
const double VOLUME = (4.0 / 3.0) * PI * (RADIUS * RADIUS * RADIUS); // Volume of the sphere      
printf("The volume of the sphere with radius %.2f is: %.2f\n", RADIUS, VOLUME); // Print the result

    return 0;
}
#include <stdio.h>
int main(){

    int n;
    printf("Enter a number (0 to exit): ");
    while(1) {
        scanf("%d", &n);
        if(n == 0) {
            printf("Exiting the program.\n");
            goto end; // Use goto to exit the loop
        }
        printf("You entered: %d\n", n);
    }   
end:
    printf("Program ended.\n");
    return 0;
}
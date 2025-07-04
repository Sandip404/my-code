#include <stdio.h>
int main(){

    int i;
    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            printf("Skipping number %d\n", i);
            continue; // Skip the rest of the loop when i is 5
        }
        printf("Current number: %d\n", i);
    }

    return 0;
}
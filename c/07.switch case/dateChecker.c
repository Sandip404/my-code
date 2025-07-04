#include <stdio.h>
int main(){

    int day, month, year;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year); 
    switch(month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            if(day < 1 || day > 31) {
                printf("Invalid date.\n");
            } else {
                printf("Valid date.\n");
            }
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            if(day < 1 || day > 30) {
                printf("Invalid date.\n");
            } else {
                printf("Valid date.\n");
            }
            break;
        case 2: // February
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { // Leap year check
                if(day < 1 || day > 29) {
                    printf("Invalid date.\n");
                } else {
                    printf("Valid date.\n");
                }
            } else {
                if(day < 1 || day > 28) {
                    printf("Invalid date.\n");
                } else {
                    printf("Valid date.\n");
                }
            }
            break;
        default:
            printf("Invalid month.\n");
    }

    return 0;
}


// print percentages of 4 subjects where marks are out of 40


#include <stdio.h>

int main(){
    float m1 = 39; //english marks
    float m2 = 38; //hindi marks
    float m3 = 37; //chemistry marks
    float m4 = 36; //math marks
    float p = (m1 + m2 + m3 + m4)/4;
    printf("percentage of all four subjects out of 40 : %f",p);

    return 0;
}
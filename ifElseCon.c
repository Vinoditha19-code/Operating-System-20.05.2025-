//if-else condition
//Q1. Enter Your age and verify your alligible or not for volting
#include <stdio.h>

int main() {
    int age;
    
    printf("Enter Your Age: ");
    scanf("%d", &age);
   
    if (age >= 18) {
        printf("You are eligible for voting!\n");
    } else {
        printf("Not Eligible!\n");
    }
    
    return 0;
}

//program to tell if a person qualifify for a loan
/*
program to tell if one is eligible for a loan
author:Mary
Reg no :CT101/G/23804/24
date:24/09/24
*/
#include <stdio.h>

int main() {
    int age;
    float income;

    // Input user details
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    // Check conditions for loan eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
//program to find compound interest
/*
program to find compound interest
author:Mary
Reg no:CT101/G/23804/24
date:22/09/2024
*/
	#include <stdio.h>
#include <math.h>  // for pow function

int main() {
    double principal, rate, time, compoundInterest;
    int n;  

  
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    
    compoundInterest = principal * pow((1 + (rate / (n * 100))), n * time);

  
    printf("The compound interest is: %.2lf\n", compoundInterest);

    return 0;
}
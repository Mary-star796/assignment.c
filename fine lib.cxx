// program to find fine
/*
program to find fine
author:mary
reg no:CT101/G/23804/24
date:25/09/2024
*/
#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int fineRate, fineAmount;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (in days): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (in days): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate based on days overdue
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    // Calculate total fine amount
    fineAmount = daysOverdue * fineRate;

    // Display all details
    printf("\nBook ID: %d", bookID);
    printf("\nDue Date: %d", dueDate);
    printf("\nReturn Date: %d", returnDate);
    printf("\nDays Overdue: %d", daysOverdue);
    printf("\nFine Rate: Ksh. %d", fineRate);
    printf("\nTotal Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}
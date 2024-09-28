/*
 * Auth: CADE PREISTER
 * Date: 09-28-24 (Due: 09-29-24)
 * Course: CSCI-2240 (Sec: 851)
 * Desc: ASSIGNMENT-03, Water molecules counter.
 */

/* Statement to add printf() and scanf() from stdio.h. */
#include <stdio.h>

/* Main function */
int main(void)
{
    /* Declaration of the user variable, and the total moles in the amount of quarts given. */
    float qts;
    double total_moles;

    /* Constants declared and initialized with their predetermined & static values. */
    const double mass_H2O = 3.0e-23;
    const int qt2grams = 950;

    /* Print function that prompts user to enter the amount of quarts, and Scan function that retrieves user input. */
    printf("*** Water Molecules Counter ***\nEnter water quantity (in qt): ");
    scanf("%d", &qts);

    /* Calculating total moles in amount of quarts given, and then displaying results to the user. */
    total_moles = (qt2grams * qts) * mass_H2O;
    printf("Total Number of Molecules = %.2e", total_moles);
}
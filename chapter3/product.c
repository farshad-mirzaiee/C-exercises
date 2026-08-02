/*
 * Prompts the user to enter product information and displays it in tabular form.
 * K.N King's C Programming: A Modern Approach
 * Program Projects - Chapter 3 - Project 2
 * By Farshad Mirzaiee
 */

#include <stdio.h>

int main(void)
{

    int item, day, month, year;
    float price;

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter Purchase Date (mm/dd/year): " );
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tprice\tdate\n");
    printf("%-5d\t$%7.2f\t%.2d/%.2d/%d\n", item, price, month, day, year);

    return 0;
}
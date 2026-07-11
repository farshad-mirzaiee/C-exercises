/*
 * Shows how to pay an amount using $20, $10, $5, $1 bills.
 * K.N King's C Programming: A Modern Approach. 
 * Program Projects
 * By Farshad Mirzaiee
 */

 #include <stdio.h>

 #define TWENTY_BILL 20
 #define TEN_BILL 10
 #define FIVE_BILL 5
 #define ONE_BILL 1

 int main(void)
 
 {
    int amount, remainder, twenty, ten, five, one; 

    printf("Enter a dollar amount: ");
    scanf("%d", &amount); 

    twenty = amount / TWENTY_BILL; 
    remainder = amount - twenty * TWENTY_BILL;
    ten = remainder / TEN_BILL;
    remainder = remainder - ten * TEN_BILL;
    five = remainder / FIVE_BILL;
    remainder = remainder - five * FIVE_BILL;
    one = remainder / ONE_BILL;
    remainder = remainder - one * ONE_BILL;

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenty, ten, five, one);
    return 0;

 }
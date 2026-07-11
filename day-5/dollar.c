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
 

 int main(void)
 
 {
    int amount, remainder;
    int twenty, ten, five, one; 

    printf("Enter a dollar amount: ");
    scanf("%d", &amount); 

    twenty = amount / TWENTY_BILL; 
    remainder = amount - twenty * TWENTY_BILL;

    ten = remainder / TEN_BILL;
    remainder = remainder - ten * TEN_BILL;

    five = remainder / FIVE_BILL;
    remainder = remainder - five * FIVE_BILL;

    one = remainder;

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);
    return 0;

 }
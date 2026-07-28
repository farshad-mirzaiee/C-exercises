/*
 * Prompts the user for an amount and displays the total with tax added.
 * C programming language exercise. 
 */

#include <stdio.h>

int main(void)
{
    const float TAX_RATE = 5.0f;

    float amount, total, tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount * TAX_RATE / 100.0f;
    total = amount + tax;

    printf("Tax rate: %.2f%%\n", TAX_RATE);
    printf("The tax is: %.2f\n", tax);
    printf("With tax added: %.2f\n", total);
    return 0;
}
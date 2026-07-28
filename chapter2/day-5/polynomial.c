/*
 * Calculates the value of x for 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 * C Program language exercises
 * By Farshad Mirzaiee
 */

#include <stdio.h>

int main(void)
{
    int x, result;

    printf("Enter a value for x: ");
    scanf("%d" , &x);

    result = 3 * x * x * x * x * x 
           + 2 * x * x * x * x 
           - 5 * x * x * x 
           - x * x 
           + 7 * x 
           - 6;

    printf("The result is: %d\n", result); 
    return 0; 
}
/*
 * Evaluates the polynomial using Horner's Rule.
 * K.N King's C Programing: A modern Approach.
 * Program project
 * By Farshad Mirzaiee
 */

 #include <stdio.h>

 int main(void)
 {
    int x, result;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    result =  3 * x + 2; 
    result = result * x - 5;
    result = result * x - 1; 
    result = result * x + 7;
    result = result * x - 6;   

    printf("The result is: %d\n", result);
    return 0;
 }
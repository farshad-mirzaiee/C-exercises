/*
 * Asks user to input a date in format of mm/dd/yyyy and prints yyyymmdd in output. 
 * K.N King's C Programming: A modern approach
 * Program Projects - Chapter 3 - Project 1
 * By Farshad Mirzaiee
 */


#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter the date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d%.2d%.2d\n", year, month, day);
    return 0;
}
/*
 * Prompts the user to enter a phone number and displays it in dot-seperated format
 * K.N. King's C Programming: A Modern Approach
 * Programming Projects - Chapter 3 - Project 4
 * By Farshad Mirzaiee
 */

#include <stdio.h>

int main(void)
{
    int areaCode, prefix, lineNumber;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &areaCode, &prefix, &lineNumber);

    printf("You entered %d.%d.%d\n", areaCode, prefix, lineNumber);

    return 0;
}
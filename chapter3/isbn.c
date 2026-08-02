/*
 * Prompts user for an ISBN and breaks down the ISBN to GS1 Prefix, GI, Publisher code etc. 
 * K.N King's C Programming: A Modern Approach
 * Programming Projects - Chapter 3 - Project 3.
 * Farshad Mirzaiee
 */ 

#include <stdio.h>

int main(void)
{
    int gs, groupID;
    int pubCode, itNumber, checkDigit;

    printf("Enter ISBN (xxx-x-xxx-xxxxx-x): ");
    scanf("%d-%d-%d-%d-%d", &gs, &groupID, &pubCode, &itNumber, &checkDigit);

    printf("GS1 prefix: %d\n", gs);
    printf("Group identifier: %d\n", groupID);
    printf("Publisher code: %d\n", pubCode);
    printf("Item number: %d\n", itNumber);
    printf("Check digit: %d\n", checkDigit);

    return 0;

}
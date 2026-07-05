/*
 * This program calculates the dimensional weight of a box
 * Written by Farshad Mirzaiee
 * C Programming language exercises
 */

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter the height: ");
    scanf("%d", &height);
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: " );
    scanf("%d", &width);

    volume = height * length * width; 
    weight = (volume + 165) / 166;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
}
/*
 * The program calculates the volume of a sphere that has a 10 meter Radius. 
 * Written by Farshad Mirzaiee
 * C Programming language Excercise
 */

#include <stdio.h>

int main(void)
{
    float pi, volume;
    int radius;

    radius = 10;
    pi = 3.1415;

    volume = (4.0f / 3.0f * pi) * radius * radius * radius;

    printf("The Volume of the sphere is %.4f\n", volume);
    return 0;
}
/*
 * The program calculates the volume of a sphere with Radius input from user. 
 * Written by Farshad Mirzaiee
 * C Programming language Exercise
 */

#include <stdio.h>

int main(void)
{
    const float PI = 3.1415f;
    float radius, volume;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    volume = 4.0f / 3.0f * PI * radius * radius * radius;

    printf("The Volume of Sphere is: %.1f\n", volume);
    return 0;
    
}
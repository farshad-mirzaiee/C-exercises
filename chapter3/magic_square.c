/*
 * Prompts the user to enter numbers 1 through 16 in any order, 
 * displays the numbers in a 4x4 arrangement, and calculates the sums of
 * the rows, columns and diagonals. 
 * 
 * K.N King's C Programming: A Modern Approach
 * Programming Projects - Chapter 3 - Project 5
 * By Farshad Mirzaiee
 */


#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    int e, f, g, h;
    int i, j, k, l;
    int m, n, o, p;

    int row1, row2, row3, row4;
    int column1, column2, column3, column4;
    int diagonal1, diagonal2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    scanf("%d%d%d%d", &e, &f, &g, &h);
    scanf("%d%d%d%d", &i, &j, &k, &l);
    scanf("%d%d%d%d", &m, &n, &o, &p);
    printf("\n");

    printf("%3d %3d %3d %3d\n", a, b, c, d);
    printf("%3d %3d %3d %3d\n", e, f, g, h);
    printf("%3d %3d %3d %3d\n", i, j, k, l);
    printf("%3d %3d %3d %3d\n", m, n, o, p);
    printf("\n");


    row1 = a + b + c + d;
    row2 = e + f + g + h;
    row3 = i + j + k + l;
    row4 = m + n + o + p;
   
    column1 = a + e + i + m;
    column2 = b + f + j + n;
    column3 = c + g + k + o;
    column4 = d + h + l + p;

    diagonal1 = a + f + k + p;
    diagonal2 = d + g + j + m;

    printf("Row sums: %3d %3d %3d %3d\n", row1, row2, row3, row4);
    printf("Column sums: %3d %3d %3d %3d\n", column1, column2, column3, column4);
    printf("Diagonal sums: %3d %3d\n", diagonal1, diagonal2);

    return 0;

}
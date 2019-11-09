#include <stdio.h>
#include <math.h> // Include math library (header file)

// Write a C program to enter length and breadth of rectangle and find its diagonal >>

int main()
{
    float length, breadth, diagonal;

    printf("Enter the value of Length: \n");
    scanf("%f", &length);

    printf("Enter the value of Breadth: \n");
    scanf("%f", &breadth);

    diagonal = sqrt(
                        pow(breadth,2) + pow(length,2)
                    ); // Low of rectangle's diagonal, D = square root ( w square + l square ); l = length, w = breadth / wide

    printf("The rectangle\'s length %.2f cm and breadth %.2f cm and it\'s diagonal is %.2f cm square. \n", length, breadth, diagonal);

    return 0;
}

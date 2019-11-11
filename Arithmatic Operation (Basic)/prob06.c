#include <stdio.h>
#include <math.h> // Include for M_PI

// Write a C program to enter radius of a circle and find it's Diameter, Circumference & Area >>

int main(void)
{
    float radius, diameter, circumference, area;

    printf("Enter the value of Radius: \n");
    scanf("%f", &radius);

    diameter = 2 * radius; // Law of circle's diameter, d = 2r; r = radius

    circumference = 2 * M_PI * radius; // Law of circle's circumference, c = 2PIr; r = radius

    area = M_PI * pow(radius, 2); // Law of circle's area, A = PIr square; r = radius

    printf("The value of circle\'s radius %.2f and It\'s diameter is %.2f \n", radius, diameter);

    printf("The value of circle\'s radius %.2f and It\'s circumference is %.2f \n", radius, circumference);

    printf("The value of circle\'s radius %.2f and It\'s area is %.2f \n", radius, area);

    return 0;
}

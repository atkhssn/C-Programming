#include <stdio.h>

// Write a C program to enter length in centimeter and convert it into meter and kilometer >>

int main()
{
    float length, meter, kilometer;

    printf("Enter the value of Length (cm): \n");
    scanf("%f", &length);

    meter = length / 100; // We know, 1 meter = 100 centimeter

    kilometer = length / 100000; // We know, 1 kilometer = 1 meter; 1 kilometer = 100000 centimeter

    printf("The length you\'ve entered %.2f cm & It\'s meter value is %.2f m.\n", length, meter);

    printf("The length you\'ve entered %.2f cm & It\'s kilometer value is %.2f km.\n", length, kilometer);

    return 0;
}

#include <stdio.h>

// Write a C program to enter temperature in °Fahrenheit  and convert it into °Celsius >>

int main ()
{
    float temperature, celsius;

    printf("Enter a value of temperature in Fahrenheit: \n");
    scanf("%f", &temperature);

    celsius = ((5 * temperature) - 160) / 9; // Law of °F to °C, °C = (5 * temperature °C - 160) / 9

    printf("The temperature you\'ve entered %.2f F and It\'s celsius value is %.2f F \n", temperature, celsius);

    return 0;
}

#include <stdio.h>

// Write a C program to enter temperature in °Celsius  and convert it into °Fahrenheit >>

int main ()
{
    float temperature, fahrenheit;

    printf("Enter a value of temperature in Celsius: \n");
    scanf("%f", &temperature);

    fahrenheit = ((9 * temperature) + 160) / 5; // Law of °C to °F, °F = (9 * temperature °C +160) / 5

    printf("The temperature you\'ve entered %.2f C and It\'s fahrenheit value is %.2f F \n", temperature, fahrenheit);

    return 0;
}

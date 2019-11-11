#include <stdio.h>
#include <math.h>

// Write a C program to find power of any number x ^ y >>

int main(void)
{
    int base, exponent, result;

    printf("Enter the base value: \n");
    scanf("%d", &base);

    printf("Enter the exponent value: \n");
    scanf("%d", &exponent);

    result = pow(base, exponent);

    printf("Base: %d \n", base);
    printf("Exponent: %d \n", exponent);
    printf("Result: %d \n", result);

    return 0;
}

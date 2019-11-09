#include <stdio.h>

// Write a C Program to enter two numbers and perform all arithmetic operations >>

int main()
{
    int one, two, add, sub, multi, div , mod;

    printf("Enter number one \n");
    scanf("%d", &one);

    printf("Enter number two \n");
    scanf("%d", &two);

    add = one + two; // Additions

    sub = one - two; // Subtractions

    multi = one * two; // Multiplications

    div = one / two; // Divisions

    mod = one % two; // Modulus

    printf("The Addition is (%d + %d) %d \n", one, two, add);

    printf("The Subtraction is (%d - %d) %d \n", one, two, sub);

    printf("The Multiplication is (%d * %d) %d \n", one, two, multi);

    printf("The Division is (%d / %d) %d \n", one, two, div);

    printf("The Modulus of (%d and %d) %d \n", one, two, mod);

    return 0;
}

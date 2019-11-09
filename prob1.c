#include <stdio.h>

// Write a C Program to enter two number and find their sum >>

int main()
{
    int one, two, sum;

    printf("Enter number one \n");
    scanf("%d", &one);

    printf("Enter number two \n");
    scanf("%d", &two);

    sum = one + two;

    printf("The result is (%d + %d) %d \n", one, two, sum);

    return 0;
}

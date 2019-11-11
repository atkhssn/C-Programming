#include <stdio.h>

// Write a C program to check whether a number is negative, positive or zero >>

int main(void)
{
    int number;

    printf("Enter a real number: \n");
    scanf("%d", &number);

    if(number >= 0){

        if(number != 0){

            printf("You entered %d and It\'s a positive number! \n", number);

        }else{

            printf("You entered Zero! \n");

        }

    }else{

        printf("You entered %d and It\'s a negative number! \n", number);

    }

    return 0;
}

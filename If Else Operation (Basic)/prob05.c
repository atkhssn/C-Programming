#include <stdio.h>

// Write a C program to check whether a year is leap year or not >>

int main(void)
{
    int year, check_1, check_2, check_3;

    printf("Type a year to check leap year or not: \n");
    scanf("%d", &year);

    check_1 = year % 4;

    check_2 = year % 100;

    check_3 = year % 400;

    if(check_1 == 0){

        if(check_2 == 0){

            if(check_3 == 0){

                printf("The year you\'ve entered %d. And it\'s a leap year.", year);

            }else{

                printf("The year you\'ve entered %d. And it\'s not leap year.", year);

            }

        }else{

             printf("The year you\'ve entered %d. And it\'s a leap year.", year);

        }

    }else{

        printf("The year you\'ve entered %d. And it\'s not leap year.", year);

    }

    return 0;
}

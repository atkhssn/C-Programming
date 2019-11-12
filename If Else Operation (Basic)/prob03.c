#include <stdio.h>

// Write a C Program to check whether a number is even or odd >>

int main(void)
{
    int number, check;

    printf("Type a number to check even or odd: \n");
    scanf("%d", &number);

    check = number % 2;

    if(number == 0){

        printf("The number you\'ve entered %d & It\'s a even. \n", number);

    }else{

        printf("The number you\'ve entered %d & It\'s a odd. \n", number);

    }

    return 0;
}

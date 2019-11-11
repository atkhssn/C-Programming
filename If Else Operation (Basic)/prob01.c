#include <stdio.h>

// Write a C program to find maximum between two numbers >>

int main(void)
{
    int num1, num2;

    printf("Enter number one: \n");
    scanf("%d", &num1);

    printf("Enter number two: \n");
    scanf("%d", &num2);

    if(num1 > num2){

        printf("%d is the maximum number between %d & %d \n", num1, num1, num2);

    }else{

        printf("%d is the maximum number between %d & %d \n", num2, num1, num2);

    }

    return 0;
}

#include <stdio.h>

// Write a C program to check whether a character is alphabet or digit or special character >>

int main(void)
{
    char input;

    printf("Enter something.. \n");
    scanf("%c", &input);

    if(input >= 'A' && input <= 'Z' || input >= 'a' && input >= 'Z'){

        printf("You typed %c and It\'s a alphabet.\n");

    }else if(input >= '0' && input <= '9'){

        printf("You typed %c and It\'s a digit.\n");

    }else{

        printf("You typed %c and It\'s a special character.\n");

    }

    return 0;
}

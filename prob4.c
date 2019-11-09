#include <stdio.h>

// Write a C program to enter Length and Breadth of a rectangle and find it's are >>

int main()
{
    int length, breadth, area;

    printf("Enter the value of Length: \n");
    scanf("%d", &length);

    printf("Enter the value of Breadth: \n");
    scanf("%d", &breadth);

    area = breadth * length; // Law of area, A = wl; l = length, w = breadth / wide

    printf("The rectangle\'s length %d cm and breadth %d cm and it\'s area is %d cm \n", length, breadth, area);

    return 0;
}

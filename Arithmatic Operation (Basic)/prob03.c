#include <stdio.h>

// Write a C Program to enter length and breadth of a rectangle and find it's perimeter >>

int main()
{
    int length, breadth, perimeter;

    printf("Enter the value of Length: \n");
    scanf("%d", &length);

    printf("Enter the value of Breadth: \n");
    scanf("%d", &breadth);

    perimeter = 2 * (length + breadth); // Law of perimeter, P = 2(l+w); l = length, w = breadth / wide

    printf("The rectangle\'s length %d cm and breadth %d cm and It\'s perimeter is %d cm \n", length, breadth, perimeter);

    return 0;
}

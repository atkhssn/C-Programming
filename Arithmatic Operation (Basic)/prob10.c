#include <stdio.h>

// Write a C program to convert Days into Years, Months, Weeks and Days >>

int main(void)
{
    int t_day, year, month, week, day;

    printf("Enter the total Days: \n");
    scanf("%d", &t_day);

    year = t_day / 365; // We have, 1 Year = 365 Days

    month = (t_day % 365) / 30; // We have, 1 Month = 30 Days

    week = ((t_day % 365) % 30) / 7; // We have, 1 Week = 7 Days

    day = ((t_day % 365) % 30) % 7;

    printf("Years: %d, Months: %d, Weeks: %d, Days: %d \n", year, month, week, day);

    return 0;
}

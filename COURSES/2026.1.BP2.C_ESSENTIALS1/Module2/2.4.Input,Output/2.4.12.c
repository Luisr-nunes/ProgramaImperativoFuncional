#include <stdio.h>

int main(void) 
{
    int day, month, year;
    puts("Enter day:");
    scanf("%d", &day);
    puts("Enter month:");
    scanf("%d", &month);
    puts("Enter year:");
    scanf("%d", &year);

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayOfYear = day;

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        daysInMonth[2] = 29;

    // Add days of months before current month
    for (int i = 1; i < month; i++)
        dayOfYear += daysInMonth[i];

    printf("The day of the year: %d\n", dayOfYear);

    return 0;
}

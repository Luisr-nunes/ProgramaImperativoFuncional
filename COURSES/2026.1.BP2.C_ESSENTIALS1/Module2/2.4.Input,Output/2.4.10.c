#include <stdio.h>

int main(void) 
{
	int day, month;
	puts("day:");
	scanf("%d", &day);
	puts("month:");
	scanf("%d", &month);
	int dayOfYear = 0;
	if (month > 1)
		dayOfYear += 31;
	if (month > 2)
		dayOfYear += 29;
	if (month > 3)
		dayOfYear += 31;
	if (month > 4)
		dayOfYear += 30;
	if (month > 5)
		dayOfYear += 31;
	if (month > 6)
		dayOfYear += 30;
	if (month > 7)
		dayOfYear += 31;
	if (month > 8)
		dayOfYear += 31;
	if (month > 9)
		dayOfYear += 30;
	if (month > 10)
		dayOfYear += 31;
	if (month > 11)
		dayOfYear += 30;
	dayOfYear += day;
	printf("The day of the year : %d.\n", dayOfYear);
	return 0;
}
#include <stdio.h>

int main()
{
	int daysInCurrentFebruary = 29;
	int daysInJanuary  = 31;
	int daysInFebruary = daysInCurrentFebruary;
	int daysInMarch = 31;
	int daysInApril = 30;
	int daysInMay = 31;
	int daysInJune = 30;
	int daysInJuly = 31;
	int daysInAugust = 31;
	int daysInSeptember = 30;
	int daysInOctober = 31;
	int daysInNovember = 30;
	int daysInDecember = 31;
	int daysInQ1 = daysInJanuary + daysInFebruary + daysInMarch;
	int daysInQ2 = daysInApril + daysInMay + daysInJune;
	int daysInQ3 = daysInJuly + daysInAugust + daysInSeptember;
	int daysInQ4 = daysInOctober + daysInNovember + daysInDecember;
	printf("Days in Q1 of the current year: %d\n", daysInQ1);
	printf("Days in Q2 of the current year: %d\n", daysInQ2);
	printf("Days in Q3 of the current year: %d\n", daysInQ3);
	printf("Days in Q4 of the current year: %d\n", daysInQ4);
	return 0;
}
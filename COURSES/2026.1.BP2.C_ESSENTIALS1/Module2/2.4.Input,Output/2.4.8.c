#include <stdio.h>

int main(void) 
{
	int daysCount;
	float valuePi;
	printf("How many days in the week: ");
	scanf("%d", &daysCount);
	printf("The value of Pi to two points: ");
	scanf("%f", &valuePi);
	printf("There are %d days in a week.\n", daysCount);
	printf("Pi value is %f.\n", valuePi);
	return 0;
}
#include <stdio.h>

int main(void) 
{
	float valueA;
	float valueB;
	printf("Value A: ");
	scanf("%f", &valueA);
	printf("Value B: ");
	scanf("%f", &valueB);
	printf("%f + %f = %f.\n", valueA, valueB, valueA + valueB);
	printf("%f - %f = %f.\n", valueA, valueB, valueA - valueB);
	printf("%f * %f = %f.\n", valueA, valueB, valueA * valueB);
	return 0;
}
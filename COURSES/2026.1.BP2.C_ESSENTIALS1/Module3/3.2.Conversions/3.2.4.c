#include <stdio.h>

int main(void) 
{
	float gradeAverage;
	int finalGrade;

	scanf("%f", &gradeAverage);
	finalGrade = (int)gradeAverage;
	if (finalGrade == 1)
		puts("Very bad");
	if (finalGrade == 2)
		puts("Bad");
	if (finalGrade == 3)
		puts("Neutral");
	if (finalGrade == 4)
		puts("Good");
	if (finalGrade == 5)
		puts("Very good");
	return 0;
}
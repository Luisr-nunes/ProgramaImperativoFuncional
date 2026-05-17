#include <stdio.h>

int main(void) 
{
	float studentAYear1 = 4.2;
	float studentAYear2 = 4.5;
	float studentAYear3 = 4.2;
	
	float studentBYear1 = 4.3;
	float studentBYear2 = 4.4;
	float studentBYear3 = 4.7;
	
	float studentCYear1 = 4.3;
	float studentCYear2 = 4.8;
	float studentCYear3 = 4.9;

	float studentAAvg = (studentAYear1 + studentAYear2 + studentAYear3) / 3;
	float studentBAvg = (studentBYear1 + studentBYear2 + studentBYear3) / 3;
	float studentCAvg = (studentCYear1 + studentCYear2 + studentCYear3) / 3;
	
	printf("Student name: 1stYGrade 2ndYGrade 3rdYGrade   Avg\n");
	printf("Student A     %9.2f %9.2f %9.2f %5.2f\n", studentAYear1, studentAYear2, studentAYear3, studentAAvg);
	printf("Student B     %9.2f %9.2f %9.2f %5.2f\n", studentBYear1, studentBYear2, studentBYear3, studentBAvg);
	printf("Student C     %9.2f %9.2f %9.2f %5.2f\n", studentCYear1, studentCYear2, studentCYear3, studentCAvg);
	return 0;
}
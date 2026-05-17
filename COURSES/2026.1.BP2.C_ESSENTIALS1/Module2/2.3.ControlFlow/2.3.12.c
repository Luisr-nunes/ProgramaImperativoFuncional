#include <stdio.h>

int main(void) 
{
	int n = -3;
	if (n < 0)
	{
		printf("The absolute value of %d is %d\n", n, -n);
	}
	printf("The value of n is %d\n", n);
	return 0;
}
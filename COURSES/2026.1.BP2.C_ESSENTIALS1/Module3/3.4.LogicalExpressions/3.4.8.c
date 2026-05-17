#include <stdio.h>

int main(void) 
{
	int input;
	int nibbleH, nibbleL;
	scanf("%d", &input);
	nibbleH = (input >> 4) & 15;
	nibbleL = input & 15;

	printf("H nibble: %d\n", nibbleH);
	printf("L nibble: %d\n", nibbleL);
	return 0;
}
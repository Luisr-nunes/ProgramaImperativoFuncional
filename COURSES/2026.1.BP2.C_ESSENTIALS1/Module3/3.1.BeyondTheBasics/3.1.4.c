#include <stdio.h>

int main(void)
{
	int ipAddressPart1, ipAddressPart2, ipAddressPart3, ipAddressPart4;
	scanf("%d", &ipAddressPart1);
	scanf("%d", &ipAddressPart2);
	scanf("%d", &ipAddressPart3);
	scanf("%d", &ipAddressPart4);
	if (ipAddressPart1 >= 0 && ipAddressPart1 <= 255 && 
		ipAddressPart2 >= 0 && ipAddressPart2 <= 255 &&
		ipAddressPart3 >= 0 && ipAddressPart3 <= 255 &&
		ipAddressPart4 >= 0 && ipAddressPart4 <= 255)
	{
		unsigned long int ipAddress32Bit = 0;
		ipAddress32Bit += ipAddressPart1 * 256 * 256 * 256;
		ipAddress32Bit += ipAddressPart2 * 256 * 256;
		ipAddress32Bit += ipAddressPart3 * 256;
		ipAddress32Bit += ipAddressPart4;
		printf("Human readable IP address is: %d.%d.%d.%d\n", ipAddressPart1, ipAddressPart2, ipAddressPart3, ipAddressPart4);
		printf("IP address as a 32-bit number : %lu\n", ipAddress32Bit);
	}
	else
		puts("Incorect IP Address.");
	return 0;
}

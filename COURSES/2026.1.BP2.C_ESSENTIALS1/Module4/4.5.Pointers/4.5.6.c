#include <stdio.h>

int main(void) 
{
	int v;
	printf("%zu byte for chars\n", sizeof(char));
	char c;
	printf("%zu byte for char variables\n", sizeof(c));

	printf("%zu bytes for shorts\n", sizeof(short int));
	short int si;
	printf("%zu bytes for short variables\n", sizeof(si));
	
	printf("%zu bytes for ints\n", sizeof(int));
	int i;
	printf("%zu bytes for int variables\n", sizeof(i));
	
	printf("%zu bytes for longs\n", sizeof(long int));
	long int li;
	printf("%zu bytes for long variables\n", sizeof(li));
	
	printf("%zu bytes for long longs\n", sizeof(long long int));
	long long int lli;
	printf("%zu bytes for long long variables\n", sizeof(lli));
	
	printf("%zu bytes for floats\n", sizeof(float));
	float f;
	printf("%zu bytes for float variables\n", sizeof(f));
	
	printf("%zu bytes for doubles\n", sizeof(double));
	double d;
	printf("%zu bytes for double variables\n", sizeof(d));
	
	printf("%zu bytes for pointers\n", sizeof(int *));
	int *pi;
	printf("%zu bytes for pointer variables\n", sizeof(pi));

	printf("%zu bytes for address of char variable\n", sizeof(&c));
	char *pc=&c;
	printf("%zu bytes for pointer to char variable\n", sizeof(pc));
	printf("%zu byte for value stored by pointer to char variable\n", sizeof(*pc));

	return 0;
}
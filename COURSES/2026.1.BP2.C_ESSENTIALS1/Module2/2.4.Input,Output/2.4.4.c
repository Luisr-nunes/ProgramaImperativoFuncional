#include <stdio.h>

int main(void)
{
    int value, square;

    printf("Give me a number and I will square it!\n");
    scanf("%d", &value);
    square = value * value;
    printf("You've given me: %d\n", value);
    printf("The squared value is: %d\n", square);
    return 0;
}
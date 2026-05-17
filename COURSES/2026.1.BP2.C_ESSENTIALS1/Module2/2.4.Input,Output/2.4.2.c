#include <stdio.h>

int main(void) {
    int VarInt;
    char VarChar;
    float VarFloat;
	
    VarInt = 2012;
    VarChar = 'r';
    VarFloat = 3.1415;
	 
    printf("The year is %d. The radius is denoted as %c while PI is equal to %f", 
	        VarInt, VarChar, VarFloat);
    return 0;
}
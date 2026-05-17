#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr;

    ptr = (int *) malloc(sizeof(int));
    if(ptr != NULL) {
        *ptr = 200;
        printf("ptr points to value of %d", *ptr);
        free(ptr);
    } else 
        printf("allocation failed");
    return 0;
}
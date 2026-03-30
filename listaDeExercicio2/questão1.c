#include <stdio.h> 

int main() { 
    int matriz [3] [4];  
    int i, j, c; 

    C = 0; 

    for (i = 0; i <= 2; i++ ) { 
        for (j = 0; j <= 3; j++) { 
            c = c + 1; 
            matriz [i][j] = c; 
        }
    }

    for (i = 0; i <= 2; i++ ) { 
        for (j = 0; j <= 3; j++) { 
            c = matriz [2 - i] [3 - j]; 
            matriz[i][j] = c; 
        }
    } 

    return 0;
}

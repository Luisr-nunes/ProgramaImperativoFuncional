#include <stdio.h>

#define NUM_DEV 5
#define NUM_MES 3

int main() {
    int bugs[NUM_DEV][NUM_MES];
    int totalBugs[NUM_DEV];
    float bonus[NUM_DEV];
    int i, j;

    for (i = 0; i < NUM_DEV; i++) {
        for (j = 0; j < NUM_MES; j++) {
            printf("Entre com os bugs do mês %d do desenvolvedor %d: ", j + 1, i + 1);
            scanf("%d%*c", &bugs[i][j]);
        }
    }

    for (i = 0; i < NUM_DEV; i++) {
        totalBugs[i] = 0;
        for (j = 0; j < NUM_MES; j++) {
            totalBugs[i] += bugs[i][j];
        }
        bonus[i] = totalBugs[i] * 50.0;
    }

    for (i = 0; i < NUM_DEV; i++) {
        printf("Desenvolvedor %d: total de bugs = %d, bônus = R$%.2f\n",
               i + 1, totalBugs[i], bonus[i]);
    }

    return 0;
}

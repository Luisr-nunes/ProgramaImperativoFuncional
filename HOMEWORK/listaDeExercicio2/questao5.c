#include <stdio.h>

#define NUM_FILIAIS 4
#define NUM_DIAS 7

int main() {
    int treinos[NUM_FILIAIS][NUM_DIAS];
    int totalFilial[NUM_FILIAIS];
    int totalDia[NUM_DIAS];
    int i, j;
    int melhorFilial, melhorDia;
    char *diasSemana[] = {
        "Segunda-feira", "Terça-feira", "Quarta-feira",
        "Quinta-feira", "Sexta-feira", "Sábado", "Domingo"
    };

    for (i = 0; i < NUM_FILIAIS; i++) {
        for (j = 0; j < NUM_DIAS; j++) {
            printf("Entre com treinos Filial %d, Dia %d: ", i + 1, j + 1);
            scanf("%d%*c", &treinos[i][j]);
        }
    }

    for (i = 0; i < NUM_FILIAIS; i++) {
        totalFilial[i] = 0;
        for (j = 0; j < NUM_DIAS; j++) {
            totalFilial[i] += treinos[i][j];
        }
    }

    for (j = 0; j < NUM_DIAS; j++) {
        totalDia[j] = 0;
        for (i = 0; i < NUM_FILIAIS; i++) {
            totalDia[j] += treinos[i][j];
        }
    }

    melhorFilial = 0;
    for (i = 1; i < NUM_FILIAIS; i++) {
        if (totalFilial[i] > totalFilial[melhorFilial]) {
            melhorFilial = i;
        }
    }

    melhorDia = 0;
    for (j = 1; j < NUM_DIAS; j++) {
        if (totalDia[j] > totalDia[melhorDia]) {
            melhorDia = j;
        }
    }

    printf("\nRELATÓRIO SEMANAL\n");
    for (i = 0; i < NUM_FILIAIS; i++) {
        printf("Filial %d: Total = %d treinos\n", i + 1, totalFilial[i]);
    }
    for (j = 0; j < NUM_DIAS; j++) {
        printf("%s: %d treinos\n", diasSemana[j], totalDia[j]);
    }
    printf("Filial mais ativa: %d (%d treinos)\n", melhorFilial + 1, totalFilial[melhorFilial]);
    printf("Dia mais movimentado: %s (%d treinos)\n", diasSemana[melhorDia], totalDia[melhorDia]);

    return 0;
}

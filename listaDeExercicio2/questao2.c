#include <stdio.h>

int main () {
  int vetor [5] = {2, 0, 4, 3, 1};
  int i, j, a;

  for (i = 0; i <= 3; i++) {
      for (j = 0; j <= 3 - i; j++) { 
          if (vetor[j] > vetor [j + 1]) {
              a = vetor[j];
              vetor[j] = vetor [j +1];
              vetor[j + 1] = a;
          }

          printf("%d %d %d %d\n",
                  vetor[0], vetor[1], vetor[2], vetor[3], vetor[4];
      }
  }

  return 0;
}
